#include "Mean.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

void messageOfTheDay()
{
	char * msgs[] = { "Scott is not great...", "Mario is much better than Kast.", "Wade is much better than Kast.", "BIG (Brandon is great)",
		"Generic mean message; be upset." , "KING (Kast is not good)" , "Happy Birthday! Not!" , "Kast is my third favorite teacher, any I only have two professors" ,
		"Brandon > Kast" , "Kast > Brandon? Of course not, this is a mean message." };

	srand(time(NULL));
	printf("%s\n", msgs[rand() % 10]);
}

char letterGrade(int a)
{
	if (a >= 96)
		return 'A';
	else if (a <= 95 && a >= 91)
		return 'B';
	else if (a <= 90 && a >= 86)
		return 'C';
	else if (a <= 85 && a >= 81)
		return 'D';
	else
		return 'F';
}