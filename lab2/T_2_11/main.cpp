#include <iostream>
#include <cstring>
using namespace std;

struct pisica {
	char stapan[100];
	char  nume[100];
	int age;
};

struct persoana {
	char nume[100];
	char prenume[100];
	int age;
};

struct masina {
	char marca[100];
	char nrInmatriculare[100];
	int age;
};


template <typename T>

T Min(T a, T b) {
	if (a < b) return a;
	else return b;

}

template <typename S>
bool MinBool(S a, S b) {
	if (a == b) return true;
	else return false;

}

int main()
{
	pisica p1, p2;
	persoana pers1, pers2;
	masina m1, m2;
	p1.age = 5;
	p2.age = 3;
	pers1.age = 22;
	pers2.age = 22;
	m1.age = 7;
	m2.age = 3;
	cout << Min(p1.age, p2.age) << endl;
	cout << MinBool(pers1.age, pers2.age) << endl;
	cout << MinBool(m1.age, m2.age) << endl;
	return 0;
}