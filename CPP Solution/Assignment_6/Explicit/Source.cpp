//#pragma comment (linker, "/EXPORT:messageOfTheDay=_ZN1M15messageOfTheDayEv") <-- fail
#include "Mean.h"
#include "Nice.h"
#include "Windows.h"
#include "iostream"

void main(int argc, char * argv[])
{
	void(__cdecl *messageOfTheDay)();
	char(__cdecl *letterGrade)(int);
	HMODULE hm;
	FARPROC m, g;
	int n; 

	if (argc != 3)
	{
		std::cout << "Usage: Explicit DLL_Name Grade" << std::endl;
		return;
	}

	n = atoi(argv[2]);
	hm = LoadLibrary(argv[1]);

	if (hm == NULL)
	{
		std::cout << "Error in loading DLL\n";
		return;
	}

	m = GetProcAddress(hm, "messageOfTheDay");
	g = GetProcAddress(hm, "letterGrade");

	if (m == NULL || g == NULL) std::cout << "Couldn\'t enter DLL.\n";
	else
	{
		messageOfTheDay = (void(__cdecl *)())m;
		letterGrade = (char(__cdecl *)(int))g;

 		messageOfTheDay();

		/*__asm
		{
			mov ebx, n
			push ebx
		}*/

		std::cout << "You got: " << letterGrade(n) << std::endl;

		/*__asm { pop ebx }*/
	}
}