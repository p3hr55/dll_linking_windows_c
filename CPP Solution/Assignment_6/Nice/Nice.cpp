#include "Nice.h"
#include "iostream"
#include "stdlib.h"
#include "time.h"

extern "C"
{
	void M::messageOfTheDay()
	{
		char * msgs[] = { "Hey, It's a great day out today!", "Kast is great!", "Kast is the best teacher in the multiverse",
			"Brandon is okay, but Kast is great!", "This is a nice message.", "Make America Kast Again!",
			"All these nice comments are certainly deserving of an A!!", "I hope you\'re having a splendid day!", 
			"Kast > Brandon", "Kast for President of the Universe 2020" };

		srand(time(NULL));
		std::cout << msgs[rand() % 10] << std::endl;
	}

	//If you get a higher grade than a 4% you should be rewarded.
	char M::letterGrade(int a)
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
}