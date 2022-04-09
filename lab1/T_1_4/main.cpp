#include <iostream>

#ifndef A_HEADER
  #include "a.h"
#else B_HEADER
  #include "b.h"
#endif
int main()
{
	printf("%d",test(2, 3));
	
	return 0;
}
