#pragma once

#include <stdio.h>
#include <hooks/hooking.hpp>
#include <input/hotkey.hpp>
#include <Minhook.h>
#include "Dumper-7_5.3.2-29314046+++UE5+Release-5.3-ChainedTogether/CppSDK/SDK.hpp"
#include "Movie.hpp"

#define LOCK()                          \
	{                                   \
		EnterCriticalSection(&g_mutex); \
	}

#define UNLOCK()                        \
	{                                   \
		LeaveCriticalSection(&g_mutex); \
	}

#define M_PI 3.14159265358979323846

namespace big
{
	// Query Performance
	typedef BOOL(WINAPI* fn_QueryPerformanceFrequency)(LARGE_INTEGER* lpPerformanceCount);
	static fn_QueryPerformanceFrequency g_orig_QueryPerformanceFrequency;

	typedef BOOL(WINAPI* fn_QueryPerformanceCounter)(LARGE_INTEGER* lpPerformanceCount);
	static fn_QueryPerformanceCounter g_orig_QueryPerformanceCounter;

	template<typename T>
	void CreateAndEnableHook(void* target, void* detour, T** original);
	static BOOL WINAPI QueryPerformanceFrequencyHook(LARGE_INTEGER* f);
	static BOOL WINAPI QueryPerformanceCounterHook(LARGE_INTEGER* f);

	static struct
	{
		DWORD ticks;
		LARGE_INTEGER frequency;
	} g_qpc = {0};

	static CRITICAL_SECTION g_mutex = {0};
	static double g_delta = 1 / 60.0f;
	static DWORD g_game_thread = 0;

	// Delta time
	static double* FApp_DeltaTime;
	static double* FApp_CurrentTime;
	static double* FApp_LastTime;
	static double* FGenericPlatformTime_SecondsPerCycle;

	// Disable Rendering
	static bool g_disable_rendering{};
	static int g_render_thread{};
	static int g_tick_thread{};

	typedef void(WINAPI* fn_Sleep)(DWORD milliseconds);
	static fn_Sleep g_orig_Sleep;

	inline bool g_chained_together_freeze_state = false;
	inline bool g_chained_together_advance_one_frame = false;

	class tas
	{
		public:
			void init();
		    void destroy();
		    void on_tick(bool ingame, SDK::APlayerController* playerController);
		    void wndproc(UINT msg, WPARAM wparam, LPARAM lparam);
			
			static void hook_UEngine_UpdateTimeAndHandleMaxTickRate(void* this_);
		    static void hook_char_tick(SDK::ABP_Character_C* pawn, void* stack, void* result);

			static void SleepHookDisableRendering(DWORD milliseconds);
		    static float hook_UGameEngine_GetMaxTickRate(SDK::UGameEngine* this_, float deltaTime, bool allowFrameRateSmoothing);

		    static inline bool _lastInGame;
		    static inline Movie _movie;
		    static inline int _pauseFrame;
		    static inline SDK::APlayerController* PlayerController;
		    static inline bool _spacePressed = false;
		    static inline bool _lastGrounded = false;
		    static inline bool _jumped = false;
		    static inline bool _savestate = false;
		    static inline bool _loadstate = false;
		    static inline bool _fastForward = false;
			static inline double angle = -35;
			static inline double maxAccel = 2500;
			static inline double maxAirVel = 790;

		private:
		    static void disable_rendering(bool disable);
		    float _currentTimeScale;
	};
}
