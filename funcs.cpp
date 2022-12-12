#include <iostream>
#include "funcs.h"

void printRange(int left, int right)
{
	if (left<right)
	{
		std::cout << left << " ";
		printRange(left+1,right);
	}
	else
	{
		std::cout << right << std::endl;
	}
}
