#include <iostream>
#include <cstring>
#include <list>
using namespace std;

class Student {

public:
	Student(int g=2,string n="georgescu")
	{
		cout << "constructor called"<<endl;
		grade = g;
		name =n;
		count++;
	}
	void promoted()
	{
		cout << grade<<endl;
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

class Node {
public:Student s;
	  Node* next;
};

int Student::count = 0;
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;

	head = new Node();
	second = new Node();
	third = new Node();
	Student* ptr;
	
		ptr= &head->s;
		ptr->getDetails();
		ptr->putDetails();
	head->next = second;

	
	ptr = &second->s;
	ptr->getDetails();
	ptr->putDetails();
	second->next = NULL;

	
	ptr = &third->s;
	ptr->getDetails();
	ptr->putDetails();
	third->next = NULL;
	cout << "Total objects created: " << Student::totalObjects() << endl;
	return 0;
}