#include <iostream>
#include "funcs.h"

int main()
{
	printRange(-2,10);
	
	int x = sumRange(1,3);
	std::cout << "This is " << x << std::endl;	// 6
	
	int y = sumRange(-2, 10);
	std::cout << "That is " << y << std::endl;	// 52
	
	
	return 0;
}
