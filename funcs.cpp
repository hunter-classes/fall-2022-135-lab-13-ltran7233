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

int sumRange(int left, int right)
{
	int sum = 0;
	if (left<=right)
	{
		sum = left + sumRange(left+1,right);
	}
	return sum;
}
