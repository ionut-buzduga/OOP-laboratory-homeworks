#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

class Group {

	class Student {
	
		string name;
		int age;
	public:
		Student(string name, int age) {
			this->age = age;
			this->name = name;
		}
		void setAge(int age)
		{
			this->age;
		}
		void setName(string name)
		{
			this->name = name;
		}
		int getAge() {
			return this->age;
		}
		string getName()
		{
			return this->name;
		}
		friend class Group;
	};
	vector<list<Student>>* group;
	int noGroups;
public:
	Group(int noGroups){
		this->noGroups = noGroups;
		this->group = new vector<list<Student>>(noGroups);
	}

	void addStudent(string name, int age, int groupNo) {
		if (groupNo > this->noGroups) {
			return;
		}
		this->group->at(groupNo).push_back(Student(name, age));
	}
	list<Student> getStudents(int groupNo) {
		return this->group->at(groupNo);
	}
};


int main()
{
	Group* Groups = new Group(3);
	Groups->addStudent("Andrei", 20, 1);
	Groups->addStudent("Marcel", 20, 1);
	Groups->addStudent("Cristian", 20,2);
	Groups->addStudent("Andreea", 20, 2);
	Groups->addStudent("Ionut", 20, 2);
	cout << "Grupa 1:" << endl;
	for (auto student : Groups->getStudents(1)) {
		cout << student.getName()<<endl;
	}
	cout << "Grupa 2:" << endl;
	for (auto student : Groups->getStudents(2)) {
		cout << student.getName() << endl;
	}
	return 0;
}