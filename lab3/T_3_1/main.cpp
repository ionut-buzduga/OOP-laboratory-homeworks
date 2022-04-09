#include <iostream>
#include <cstring>
using namespace std;

class Student {

public:
	Student(int g=2,string n="georgescu")
	{
		cout << "constructor called"<<endl;
		grade = g;
		name =n;
		
	}
	void promoted()
	{
		cout << grade<<endl;
		cout << name << endl;
		
	}
	void getDetails(void);
	void putDetails(void);
private:
	int grade;
	string name;
};

void Student::getDetails(void) {
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter grade: ";
	cin >> grade;
	
}

void Student::putDetails(void) {
	cout << "Student details:\n";
	cout << "Name:" << name << ",Grade:" << grade << endl;
}

int main()
{
	Student student1(8,"popescu");
	Student student2(4,"ionescu");
	Student student3;
	Student* ptrs;
	ptrs = &student1;
	ptrs->promoted();
	ptrs = &student2;
	ptrs->promoted();
	ptrs = &student3;
	ptrs->getDetails();
	ptrs->putDetails();
	return 0;
}