#include <iostream>
#include <string>
#include <cctype>
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

bool isAlphanumeric(std::string s)
{
	bool valid = true;
	int size = s.length();
	if (size>0)
	{
		valid = isalnum(s[0]);
		if (valid)
		{
			valid = isAlphanumeric(s.substr(1,size-1));
		}
	}
	return valid;
}
