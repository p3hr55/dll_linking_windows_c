#include "Nice.h"
#include "Windows.h"
#include "stdio.h"

void main(int a, LPTSTR b[])
{
	messageOfTheDay();
	printf("You got: %c\n", letterGrade(atoi(b[1])));
}