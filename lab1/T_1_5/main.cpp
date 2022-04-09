#include <iostream>
#define FOO

#include "a.h"
#include "b.h"
using namespace std;

int test2(int a,int b)
{
	return a - b;
}

int main()
{
	printf("%d\n",test(2, 3));
	printf("%d\n",test1(2, 3));
	printf("%d\n",test2(3, 2));
	return 0;
}