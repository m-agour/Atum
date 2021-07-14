#pragma once

#ifdef ATUM_PLATFORM_WINDOWS
	#ifdef ATUM_BUILD_DLL
		#define ATUM_API __declspec(dllexport)
	#else
		#define ATUM_API __declspec(dllimport)
	#endif // ATM_BUILD_DLL
#else
	#error Atum only supports windows!
#endif // ATM_PLATFORM_WINDOWS

