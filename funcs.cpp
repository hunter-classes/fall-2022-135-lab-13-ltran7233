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

int sumArray(int *arr, int size)
{
	int sum = 0;
	if (size>=0)
	{
		sum = sumArrayInRange(arr, 0, size-1);
	}
	return sum;
}

int sumArrayInRange(int *arr, int left, int right)
{
	int sum = 0;
	if (left<=right)
	{
		sum = arr[left] + sumArrayInRange(arr,left+1,right);
	}
	return sum;
}
