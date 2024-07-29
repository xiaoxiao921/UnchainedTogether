#pragma once

#include <string>
#include <vector>
#include <queue>
#include <iostream>
#include <fstream>
#include "Dumper-7_5.3.2-29314046+++UE5+Release-5.3-ChainedTogether/CppSDK/SDK.hpp"
#include "Input.hpp"

#define TO_S(vec) vec.X << ", " << vec.Y << ", " << vec.Z

namespace big
{
	struct RecordEntry
	{
		bool wPressed : 1;
		bool aPressed : 1;
		bool sPressed : 1;
		bool dPressed : 1;
		bool spacePressed : 1;
		bool shiftPressed : 1;
		bool leftClick    : 1;
		bool rightClick   : 1;
		float mouseX;
		float mouseY;
		SDK::FRotator cameraRot;
		SDK::FVector playerPos;
		SDK::FRotator playerRot;
		SDK::FVector playerVel;
		SDK::FVector playerAcc;
	};

	struct Savestate
	{
		SDK::FRotator cameraRot;
		SDK::FVector playerPos;
		SDK::FRotator playerRot;
		SDK::FVector playerVel;
		SDK::FVector pawnPos;
		SDK::FRotator pawnRot;
		SDK::FVector pawnVel;
		SDK::FVector pawnAcc;
	};

	class Movie
	{
	public:
		void init(std::string filePath, bool recording);
		void stop();
		void update(SDK::APlayerController* playerController);
		void savestate(SDK::APlayerController* playerController);
		void loadstate(SDK::APlayerController* playerController);
		bool is_end();
		void start_rerecord(SDK::APlayerController* playerController);
		bool Recording;

	private:
		std::string _filePath;
		std::queue<RecordEntry> _entries;
		std::queue<RecordEntry> _buffer;
		std::ofstream _outf;
		std::ifstream _inf;
		RecordEntry _currentEntry;
		Savestate _savestate;
		bool _playing;

		void get_inputs(SDK::APlayerController* playerController);
		void set_inputs(SDK::APlayerController* playerController, RecordEntry& entry);
	};
}