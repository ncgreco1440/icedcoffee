#pragma once

#ifdef IC_PLATFORM_WINDOWS
	#ifdef IC_BUILD_DLL
		#define ICEDCOFFEE_API __declspec(dllexport)
	#else 
		#define ICEDCOFFEE_API __declspec(dllimport)
	#endif
#else
	#error Icedcoffee only supports Windows at this time.
#endif
