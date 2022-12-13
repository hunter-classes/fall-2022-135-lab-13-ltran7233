#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("Task A tests")
{
	CHECK(printRange(-5,2)=="-5 -4 -3 -2 -1 0 1 2");
	CHECK(printRange(-10,-3)=="-10 -9 -8 -7 -6 -5 -4 -3");
	CHECK(printRange(0,0)=="0");
	CHECK(printRange(5,2)=="");
}

TEST_CASE("Task B tests")
{
	CHECK(sumRange(5,10)==45);
	CHECK(sumRange(5,2)==0);
	CHECK(sumRange(1,1)==1);
}

TEST_CASE("Task C tests")
{
	int *arr = new int[5];
	arr[0] = 5;
	arr[1] = -1;
	arr[2] = 3;
	arr[3] = -2;
	arr[4] = 6;
	CHECK(sumArray(arr, 2)==4);
	CHECK(sumArray(arr, 5)==11);
	CHECK(sumArrayInRange(arr, 2, 3)==1);
}

TEST_CASE("Task D tests")
{
	CHECK(isAlphanumeric("abcd-")==0);
	CHECK(isAlphanumeric("-abcd")==0);
	CHECK(isAlphanumeric("abc-d")==0);
	CHECK(isAlphanumeric("")==1);
}

TEST_CASE("Task E tests")
{
	CHECK(nestedParens("(")==0);
	CHECK(nestedParens(")")==0);
	CHECK(nestedParens("()(")==0);
	CHECK(nestedParens("()abc")==0);
}
