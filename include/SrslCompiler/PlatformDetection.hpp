#pragma once

// identify operating system and toolchain
#if defined(WIN64) || defined(_WIN64) || defined(WIN32)
#if defined(SRSL_EXPORT_DLL)
#define SRSL_API __declspec(dllexport)
#else
#define SRSL_API __declspec(dllimport)
#endif
#else
#define SRSL_API

#endif