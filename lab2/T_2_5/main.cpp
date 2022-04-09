#include <iostream>
#include <cstring>
using namespace std;

int f(int x)
{
	return x;
}

double f(double x)
{
	return x;
}

int f(char *x)
{
	return strlen(x);
}

struct Student {
	int Grade;
};

int f(Student x)
{
	return x.Grade;
}


int main()
{
	int a = 3; double b = 3.5;char str[50]="abcd"; Student d;
	d.Grade = 1;
	
	cout << f(a)<<endl;
	cout << f(b) << endl;
	cout << f(str) << endl;
	cout << f(d) << endl;

	return 0;
}