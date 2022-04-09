#include <iostream>
#include <string>
#include <list>
using namespace std;
class Student {
private:
	int note;
	string name;
public:
	Student(int note = 0, string name = "Joe Doe") {
		this->note = note;
		this->name = name;
	}
	void setNote(int n) {
		this->note = n;
	}
	int getNote() {
		return this->note;
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
};


bool studentCompare(Student stud1, Student stud2) {
	return stud1.getNote() < stud2.getNote();
}


class StudentsGroup {


private:
	int studentsNumber;
	list<Student> studentsList;
public:
	StudentsGroup(int studentsNumber) {
		this->studentsNumber = studentsNumber;

	}
	void showStudentsInGroup() {
		list<Student>::iterator it;

		for (it = studentsList.begin(); it != studentsList.end(); it++) {
			cout << (*it).getName() << " " << (*it).getNote() << "\n";
		}
	}
	void readStudentGroup() {
		int note;
		string studentName;
		for (int i = 0; i < this->studentsNumber; i++) {
			cout << "student " << i << " name:";
			cin >> studentName;
			cout << "note ";
			cin >> note;
			studentsList.push_back(Student(note, studentName));
		}
	}
	void sortStudentGroup() {
		studentsList.sort(studentCompare);
	}

};
int main()
{
	StudentsGroup* studentsGroup = new StudentsGroup(3);
	studentsGroup->readStudentGroup();
	studentsGroup->sortStudentGroup();
	studentsGroup->showStudentsInGroup();
	return 0;
}