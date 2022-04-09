#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

template <typename T>

void Swap(T &a, T &b) {
	T t = a;
	a = b;
	b = t;
}

struct Student {
	int Grade;
};



int main()
{
	int a=1, b=2;
	float c = 1.2, d = 2.3;
	double e = 35.6, f = 43.5;
	char s ='a';
	char t='b';
	Student s1, s2;
	s1.Grade = 1;
	s2.Grade = 2;
	Swap(a, b);
	cout << a <<" "<<b<<endl;
	Swap(c, d);
	cout << c <<" "<<d<<endl;
	Swap(e, f);
	cout << e <<" "<<f<<endl;
	Swap(s, t);
	cout << s << " "<<t<< endl;
	Swap(s1.Grade, s2.Grade);
	cout << s1.Grade << " " << s2.Grade << endl;
	return 0;

}