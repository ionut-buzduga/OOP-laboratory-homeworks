#include <iostream>
using namespace std;

template <typename T>

T Max(T a, T b) {
	return a < b ? b : a;
}

struct Student {
	int Grade;
};

int main()
{
	
		cout << Max(2, 3) << endl;
	cout << Max(2.5, 3.4) << endl;
	cout << Max('a', 'b') << endl;
	cout << Max("bb", "aaaa") << endl;
	Student s1, s2;
	s1.Grade = 1;
	s2.Grade = 2;
	cout << Max(s1.Grade, s2.Grade);

	return 0;
}