#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Person {
	string name;
	int age;
public:
	Person(string name = "Popescu", int age = 20) {
		this->name = name;
		this->age = age;
	}
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	std::string getName() {
		return this->name;
	}
	int getAge() {
		return this->age;
	}
};

class Employee : public Person {
	string company;
public:
	Employee(string name = "Marian", int age = 20, string company = "apple")
		: Person(name, age) {
		this->company = company;

	}
	void setCompany(string company) {
		this->company = company;
	}

	string getCompany() {
		return this->company;
	}
};

template <class T, class U>
class MyTemplate {
public:
	T element1;
	U element2;
	bool ok;

	MyTemplate(T element) : element1{ element } { ok = 0; }
	MyTemplate(U element) : element2{ element } { ok = 1; }

	T getElement1() {
		return element1;
	}
	U getElement2() {
		return element2;
	}

};



int main()
{
	Person person1{ "Cristian Marcel", 20 };
	Person person2{ "Andrei Mircea",21 };
	Employee employee_1;
	MyTemplate <Person, Employee> individual1{ person1 };
	MyTemplate <Person, Employee> individual2{ person2 };
	MyTemplate <Person, Employee> individual3{ employee_1 };
	list <MyTemplate<Person, Employee>> my_list;
	my_list.push_back(individual1);
	my_list.push_back(individual2);
	my_list.push_back(individual3);

	list <MyTemplate<Person, Employee>> ::iterator it;

	it = my_list.begin();
	cout << (*it).getElement1().getName() << endl;
	++it;
	cout << (*it).getElement1().getName() << endl;
	++it;
	cout << (*it).getElement2().getName() << endl;

}