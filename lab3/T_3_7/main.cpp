#include <iostream>
#include <cstring>
#include <list>
using namespace std;

class Course {
private:
	string course_name;
	string teacher_name;
public:
	Course(string course_name, string teacher_name) {
		this->course_name = course_name;
		this->teacher_name = teacher_name;
	}

	string get_course_name() {
		return this->course_name;
	}

	string get_teacher_name() {
		return this->teacher_name;
	}
};

class Student {

public:
	static int count;
	Student() {
		no_grade();
	}
	Student(string first_name,string last_name,string group, int grade) {
		this->grade = grade;
		this->first_name = first_name;
		this->last_name = last_name;
		this->group = group;
	}
	
	void put_grade(int grade) {
		this->grade = grade;
	}
	int get_grade() {
		return this->grade;
	}
	string get_first_name() {
		return this->first_name;
	}
	string get_last_name() {
		return this->last_name;
	}
	string get_group() {
		return this->group;
	}
	

private:
	int grade;
	string first_name;
	string last_name;
	string group;
	list<Course> courses;
	void no_grade() {
		this->grade = 8;
	}
};

int Student::count = 0;

void add_student(list<Student>* students, string first_name, string last_name, string group, int grade = 0) {
	Student temp(first_name, last_name, group, grade);

	students->push_back(temp);

	Student::count++;
}

void rm_student(list<Student>* students,string first_name, string last_name) {
	list<Student>::iterator it;

	for (it = students->begin(); it != students->end(); it++) {
		if (it->get_first_name() == first_name && it->get_last_name() == last_name) {
			students->erase(it);
			break;
		}
	}

	Student::count--;
}


void find_student(list<Student> students, string first_name, string last_name = "") {
	
	list<Student>::iterator it;
	bool found = false;

	cout << "Students found with the name " << first_name << " " << last_name << ":\n";

	for (it = students.begin(); it != students.end(); it++) {
		if (it->get_first_name() == first_name || it->get_last_name() == last_name) {
			found = true;

			cout << it->get_first_name() << " ";
			cout << it->get_last_name() << " ";
			cout << it->get_group() << " ";
			cout << it->get_grade() << "\n";
		}
	}

	if (!found) {
		cout << "No students found with that name.\n";
	}

	cout << "\n";
}

void change_grade(list<Student>* students,string first_name,string last_name, int new_grade) {
	list<Student>::iterator it;

	for (it = students->begin(); it != students->end(); it++) {
		if (it->get_first_name() == first_name && it->get_last_name() == last_name) {
			it->put_grade(new_grade);
		}
	}
}

int main()
{
    list<Student> students;
	add_student(&students, "Ionut", "Popescu", "CE", 4);
	add_student(&students, "Andrei", "Costin", "CE", 8);
	add_student(&students, "Miron", "Apostol", "CE", 7);
	add_student(&students, "Sorin", "Scortan", "CR", 9);
	add_student(&students, "Sorin", "Georgescu", "CR");
	rm_student(&students, "Ionut", "Popescu");
	find_student(students, "Sorin");
	find_student(students, "Ionut");
	return 0;
}