#include "Nice.h"
#include <stdio.h>

void messageOfTheDay()
{
	char * msgs[] = { "Hey, It's a great day out today!", "Kast is great!", "Kast is the best teacher in the multiverse",
		"Brandon is okay, but Kast is great!", "This is a nice message.", "Make America Kast Again!",
		"All these nice comments are certainly deserving of an A!!", "I hope you\'re having a splendid day!",
		"Kast > Brandon", "Kast for President of the Universe 2020" };

	srand(time(NULL));
	printf("%s\n", msgs[rand() % 10]);
}

char letterGrade(int a)
{
	switch (a)
	{
	case 3: return 'B';
	case 2: return 'C';
	case 1: return 'D';
	case 0: return 'F';
	default: return 'A';
	}
}