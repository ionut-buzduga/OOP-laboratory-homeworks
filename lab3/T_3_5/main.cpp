#include <iostream>
#include <cstring>
using namespace std;

class Student {

public:
	Student(int g = 2, string n = "georgescu")
	{  
		cout << "constructor called" << endl;
		grade = g;
		name = n;
		count++;

	}
	void promoted()
	{
		cout << grade << endl;
		cout << name << endl;

	}
	void getDetails(void);
	void putDetails(void);
	static int totalObjects(void)
	{
		return count;
	}
private:
	int grade;
	string name;
	static int count;
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
int Student::count = 0;
int main()
{
	Student student1(8, "popescu");
	Student student2(4, "ionescu");
	Student student3;
	Student* ptrs;
	ptrs = &student1;
	ptrs->promoted();
	ptrs = &student2;
	ptrs->promoted();
	ptrs = &student3;
	ptrs->getDetails();
	ptrs->putDetails();
	cout << "Total objects created: " << Student::totalObjects() << endl;
	return 0;
}