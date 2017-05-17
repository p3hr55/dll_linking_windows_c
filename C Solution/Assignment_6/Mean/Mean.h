#pragma once
#if defined DLL_EXPORT
#define A __declspec(dllexport)
#else
#define A __declspec(dllimport)
#endif

A void _cdecl messageOfTheDay();
A char _cdecl letterGrade(int);