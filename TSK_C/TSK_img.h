#pragma once

#ifdef TSK_C_EXPORTS
#define TSK_C_API __declspec(dllexport)
#else
#define TSK_C_API __declspec(dllimport)
#endif

extern "C" TSK_C_API void img_open(const char* path);
