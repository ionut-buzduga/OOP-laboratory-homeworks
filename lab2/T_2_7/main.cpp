#include <iostream>
#include <cmath>
using namespace std;

struct nrComplex {
	int a;
	int b;
};

float f(float x)
{
	return x;
}

float f(nrComplex x)
{
	return sqrt(x.a * x.a + x.b * x.b);
}

int main()
{
	nrComplex x;
	x.a = 3;
	x.b = 4;
	float y = 3.45;
	cout << f(y)<<endl;
	cout << f(x);

	return 0;
}