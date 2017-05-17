#include "Nice.h"
#include "Mean.h"
#include "stdio.h"
#include "iostream"

void main(int a, char * b[])
{
	printf("==== OUTPUT FROM NICE FUNCTIONS ====\n");
	M::messageOfTheDay();
	printf("You got: %c\n" , M::letterGrade(atoi(b[1])));

	printf("\n\n==== OUTPUT FROM MEAN FUNCTIONS ====\n");
	W::messageOfTheDay();
	printf("You got: %c\n\n\n", W::letterGrade(atoi(b[1])));
}