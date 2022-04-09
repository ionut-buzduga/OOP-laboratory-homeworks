#include <iostream>
#include <cstring>
using namespace std;

class Student {

public:
	Student()
	{
		cout << "constructor called" << endl;
		s();
		

	}
	void promoted()
	{
		cout << grade << endl;
		

	}
	
private:
	int grade;
	void s()
	{grade=8;}
};


int main()
{
	Student student1;
	Student student2;
	
	Student* ptrs;
	ptrs = &student1;
	ptrs->promoted();
	ptrs = &student2;
	ptrs->promoted();
	return 0;
}