#include <iostream>
using namespace std;

struct Student {
	int Grade;
};

Student Max(Student a, Student b) {
	if (a.Grade > b.Grade)
		return a;
	else return b;
}

int main()
{
	Student s1, s2;
	s1.Grade = 2;
	s2.Grade = 3;
	cout << Max(s1, s2).Grade;

	return 0;
}