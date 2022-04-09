#include <iostream>
#include <ctime>
using namespace std;


void timeToString(long a)
{
	int v[10];
	v[5] = a % 60;
	a = a - a % 60;
	a = a / 60;
	v[4] = a % 60;
	a = a - a % 60;
	a = a / 60;
	v[3] = a % 24;
	a = a - a % 24;
	a = a / 24;
	v[2] = a % 30;
	a = a - a % 30;
	a = a / 30;
	v[1] = a % 12;
	a = a - a % 12;
	a = a / 12;
	cout << 1970+a<<"-";
	for (int i = 1; i <= 4; i++)
		cout << v[i] << '-';
	cout << v[5];
}
void timeToString()
{
	long a = time(NULL);
	int v[10];
	v[5] = a % 60;
	a = a - a % 60;
	a = a / 60;
	v[4] = a % 60;
	a = a - a % 60;
	a = a / 60;
	v[3] = a % 24;
	a = a - a % 24;
	a = a / 24;
	v[2] = a % 30;
	a = a - a % 30;
	a = a / 30;
	v[1] = a % 12;
	a = a - a % 12;
	a = a / 12;
	cout << 1970 + a << "-";
	for (int i = 1; i <= 4; i++)
		cout << v[i] << '-';
	cout << v[5];
}
int main()
{
	timeToString(time(NULL));
	cout << endl;
	timeToString();
	return 0;
}