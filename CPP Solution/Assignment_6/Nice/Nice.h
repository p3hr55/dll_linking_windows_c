#pragma once
#if defined DLL_EXPORT
#define A __declspec(dllexport)
#else
#define A __declspec(dllimport)
#endif

extern "C"
{
	class M
	{
	public:
		static A void _cdecl messageOfTheDay();
		static A char _cdecl letterGrade(int a);
	};
}