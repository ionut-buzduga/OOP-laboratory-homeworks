#include <iostream>
#include "a.h"
#include "b.h"
using namespace std;

#ifndef TEST_DEFINE
#define TEST_DEFINE
int test(int a, int b) {
	return a + b;

}
#endif
int main()
{
	printf("%d\n", test(5, 3));
	
	return 0;
}