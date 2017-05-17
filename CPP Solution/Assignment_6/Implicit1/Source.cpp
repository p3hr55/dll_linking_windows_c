#include "Nice.h"
#include "Windows.h"
#include "iostream"

void main(int a, LPTSTR b[])
{
	M::messageOfTheDay();
	std::cout << "You got: " << M::letterGrade(atoi(b[1])) << std::endl;
}