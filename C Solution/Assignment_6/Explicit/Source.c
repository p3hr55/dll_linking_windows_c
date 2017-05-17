#include "Nice.h"
#include "Mean.h"
#include "Windows.h"
#include "stdio.h"
void main(int argc, LPTSTR argv[])
{
	void(__cdecl *messageOfTheDay)();
	char(__cdecl *letterGrade)(int);
	HMODULE hm;
	FARPROC m, g;
	int n = 0;

	if (argc != 3)
	{
		printf("Usage: Explicit DLL_Name Grade\n");
		return;
	}

	hm = LoadLibrary(argv[1]);

	if (hm == NULL)
	{
		printf("Encountered a problem loading Dll.\n");
		return;
	}

	m = GetProcAddress(hm, "messageOfTheDay");
	g = GetProcAddress(hm, "letterGrade");

	if (m == NULL || g == NULL)
	{
		printf("Could not enter Dll.\n");
		return;
	}

	messageOfTheDay = (void(__cdecl *)())m;
	letterGrade = (char(__cdecl *)(int))g;

	messageOfTheDay();
	printf("You got: %c\n", letterGrade(atoi(argv[2])));
}