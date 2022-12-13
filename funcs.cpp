#include <iostream>
#include <string>
#include <cctype>
#include "funcs.h"

std::string printRange(int left, int right)
{
	std::string str = "";
	if (left<=right)
	{
		if (left<right)
		{
			str = std::to_string(left) + " ";
			str += printRange(left+1,right);
		}
		else
		{
			str += std::to_string(right);	
		}
	}
	return str;
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

bool nestedParens(std::string s)
{
	bool valid = true;
	int size = s.length();
	if (size>0)
	{
		if ((s.substr(0,1)!="(") || (s.substr(size-1,1)!=")"))
		{
			valid = false;
		}
		if (valid)
		{
			valid = nestedParens(s.substr(1, size-2));
		}
		
	}
	return valid;
}
