#include "Movie.hpp"

namespace big
{
	void Movie::init(std::string filePath, bool recording)
	{
		Recording = recording;
		_playing = !recording;
		_filePath = filePath;
		_currentEntry = {};
		_savestate = {};

		while (!_entries.empty())
			_entries.pop();

		while (!_buffer.empty())
			_buffer.pop();

		if (!recording)
		{
			LOG(DEBUG) << "Opening file for reading...";
			_inf.open(_filePath, std::ios::binary);
			size_t size = 0;
			_inf.read(reinterpret_cast<char*>(&size), sizeof(size_t));
			LOG(DEBUG) << "Reading " << size << " inputs...";
			if (size > 0)
			{
				for (int i = 0; i < size; ++i)
				{
					RecordEntry entry;
					_inf.read(reinterpret_cast<char*>(&entry), sizeof(RecordEntry));
					_entries.push(entry);
				}
			}
			LOG(DEBUG) << "Closing file...";
			_inf.close();
			LOG(DEBUG) << "Done.";

			_buffer.push(_entries.front());
			_entries.pop();
		}
	}

	void Movie::stop()
	{
		if (Recording)
		{
			while (!_buffer.empty())
			{
				_entries.push(_buffer.front());
				_buffer.pop();
			}

			LOG(DEBUG) << "Opening file for writing...";
			_outf.open(_filePath, std::ios::binary);
			size_t size = _entries.size();
			_outf.write(reinterpret_cast<char*>(&size), sizeof(size_t));
			LOG(DEBUG) << "Writing " << size << " inputs...";
			while (!_entries.empty())
			{
				RecordEntry& entry = _entries.front();
				_outf.write(reinterpret_cast<char*>(&entry), sizeof(RecordEntry));
				_entries.pop();
			}
			LOG(DEBUG) << "Closing file...";
			_outf.close();
			LOG(DEBUG) << "Done.";
			Recording = false;
		}
	}

	void Movie::update(SDK::APlayerController* playerController)
	{
		if (Recording)
		{
			get_inputs(playerController);
			_buffer.push(_currentEntry);
			_currentEntry = {};
		}
		else if (!_entries.empty())
		{
			RecordEntry& entry = _entries.front();
			set_inputs(playerController, entry);
			_buffer.push(entry);
			_entries.pop();
		}
	}

	void Movie::savestate(SDK::APlayerController* playerController)
	{
		SDK::ABP_Character_C* pawn = (decltype(pawn))playerController->Pawn;

		_savestate = {};
		_savestate.cameraRot = playerController->GetControlRotation();
		_savestate.playerPos = playerController->K2_GetActorLocation();
		_savestate.playerRot = playerController->K2_GetActorRotation();
		_savestate.playerVel = playerController->GetVelocity();
		_savestate.pawnPos = playerController->Pawn->GetTransform().Translation;
		_savestate.pawnRot = playerController->Pawn->K2_GetActorRotation();
		_savestate.pawnVel = pawn->CharacterVelocity;
		_savestate.pawnAcc = pawn->Acceleration;

		if (_buffer.empty())
			return;

		while (!_buffer.empty())
		{
			_entries.push(_buffer.front());
			_buffer.pop();
		}
	}

	void Movie::loadstate(SDK::APlayerController* playerController)
	{
		SDK::FHitResult unused{};
		SDK::ABP_Character_C* pawn = (decltype(pawn))playerController->Pawn;

		playerController->SetControlRotation(_savestate.cameraRot);
		playerController->K2_SetActorLocationAndRotation(_savestate.playerPos, _savestate.playerRot, false, &unused, true);
		pawn->K2_SetActorLocationAndRotation(_savestate.pawnPos, _savestate.pawnRot, false, &unused, true);
		pawn->CharacterVelocity = _savestate.pawnVel;
		pawn->Acceleration = _savestate.pawnAcc;

		LOG(DEBUG) << "Loaded Vel: " << TO_S(pawn->CharacterVelocity) << ", Acc: " << TO_S(pawn->Acceleration);

		while (!_buffer.empty())
			_buffer.pop();
	}

	bool Movie::is_end()
	{
		if (_entries.empty() && _playing)
		{
			_playing = false;
			return true;
		}
		return false;
	}

	void Movie::start_rerecord(SDK::APlayerController* playerController)
	{
		if (Recording || !_playing)
		{
			return;
		}
		Recording = true;
		_playing = false;
		
		_buffer.push(_entries.front());

		while (!_entries.empty())
			_entries.pop();

		while (!_buffer.empty())
		{
			_entries.push(_buffer.front());
			_buffer.pop();
		}

		Input::ReleaseKey(playerController, L"W");
		Input::ReleaseKey(playerController, L"A");
		Input::ReleaseKey(playerController, L"S");
		Input::ReleaseKey(playerController, L"D");
		Input::ReleaseKey(playerController, L"SpaceBar");
		Input::ReleaseKey(playerController, L"LeftShift");
		Input::ReleaseKey(playerController, L"RightMouseButton");
		Input::ReleaseKey(playerController, L"LeftMouseButton");
	}

	void Movie::get_inputs(SDK::APlayerController* playerController)
	{
		SDK::ABP_Character_C* pawn = (decltype(pawn))playerController->Pawn;

		_currentEntry.wPressed = Input::IsKeyDown(playerController, L"W");
		_currentEntry.aPressed = Input::IsKeyDown(playerController, L"A");
		_currentEntry.sPressed = Input::IsKeyDown(playerController, L"S");
		_currentEntry.dPressed = Input::IsKeyDown(playerController, L"D");
		_currentEntry.spacePressed = Input::IsKeyDown(playerController, L"SpaceBar");
		_currentEntry.shiftPressed = Input::IsKeyDown(playerController, L"LeftShift");
		_currentEntry.rightClick = Input::IsKeyDown(playerController, L"RightMouseButton");
		_currentEntry.leftClick = Input::IsKeyDown(playerController, L"LeftMouseButton");
		playerController->GetMousePosition(&_currentEntry.mouseX, &_currentEntry.mouseY);
		_currentEntry.cameraRot = playerController->GetControlRotation();
		_currentEntry.playerPos = playerController->Pawn->GetTransform().Translation;
		_currentEntry.playerRot = playerController->Pawn->K2_GetActorRotation();
		_currentEntry.playerVel = pawn->CharacterVelocity;
		_currentEntry.playerAcc = pawn->Acceleration;
	}

	void Movie::set_inputs(SDK::APlayerController* playerController, RecordEntry& entry)
	{
		SDK::FHitResult unused{};
		SDK::ABP_Character_C* pawn = (decltype(pawn))playerController->Pawn;

		entry.wPressed ? Input::PressKey(playerController, L"W") : Input::ReleaseKey(playerController, L"W");
		entry.aPressed ? Input::PressKey(playerController, L"A") : Input::ReleaseKey(playerController, L"A");
		entry.sPressed ? Input::PressKey(playerController, L"S") : Input::ReleaseKey(playerController, L"S");
		entry.dPressed ? Input::PressKey(playerController, L"D") : Input::ReleaseKey(playerController, L"D");
		entry.spacePressed ? Input::PressKey(playerController, L"SpaceBar") : Input::ReleaseKey(playerController, L"SpaceBar");
		entry.shiftPressed ? Input::PressKey(playerController, L"LeftShift") : Input::ReleaseKey(playerController, L"LeftShift");
		entry.rightClick ? Input::PressKey(playerController, L"RightMouseButton") : Input::ReleaseKey(playerController, L"RightMouseButton");
		entry.leftClick ? Input::PressKey(playerController, L"LeftMouseButton") : Input::ReleaseKey(playerController, L"LeftMouseButton");
		playerController->SetMouseLocation(entry.mouseX, entry.mouseY);
		playerController->SetControlRotation(entry.cameraRot);
		pawn->K2_SetActorLocationAndRotation(entry.playerPos, entry.playerRot, false, &unused, true);
		pawn->CharacterVelocity = entry.playerVel;
		pawn->Acceleration = entry.playerAcc;
	}
}