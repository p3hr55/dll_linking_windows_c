#include "Mean.h"
#include "Windows.h"
#include "iostream"
void main(int a, char * b[])
{
	W::messageOfTheDay();
	std::cout << "You got: " << W::letterGrade(atoi(b[1])) << std::endl;
}