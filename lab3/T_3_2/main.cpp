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

	}
	void promoted()
	{
		cout << grade << endl;
		cout << name << endl;

	}
	void getDetails(void);
	void putDetails(void);
	void getMax(int& max,string &name);
	
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


void Student::getMax(int &max,string & Name)
{
	if (grade > max)
	{
		max = grade;
		Name = name;
	}
}

int main()
{
	int n, i,max=0;
	string nume;
	Student std[10];    //array of objects creation
	Student* ptrs;
	cout << "enter number of students:";
	cin >> n;
	for (i = 0; i < n; i++)
	{ptrs = &std[i];
	ptrs->getDetails();
	ptrs->getMax(max,nume);
	ptrs->putDetails();}
	cout <<"The max is "<< max<<endl<<"The name of the student is:"<<nume;
	return 0;
}