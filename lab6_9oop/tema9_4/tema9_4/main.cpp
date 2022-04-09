#include <iostream>
#include <vector>
using namespace std;
class Animal {
public:
	virtual string getName() = 0;// can be just virtual, without pure
	virtual void chase(Animal* animal) = 0;
};
class Mouse : public Animal {

	
private:
	string name;
public:
	Mouse(string name) {
		this->name = name;
	}
	string getName() {
		return this->name + " as " + typeid(this).name();
	}
	void chase(Animal* animal) {
		cout << "Me, " + this->getName() + " I chase " + animal->getName() << endl;
	}
};
class Cat : public Animal {
private:
	string name;
public:
	Cat(string name) {
		this->name = name;
	}
	string getName() {
		return this->name + " as " + typeid(this).name();
	}
	void chase(Animal* animal) {
		cout << "Me, " + this->getName() + " I chase " + animal->getName() << endl;
	}
};

class Dog: public Animal {
private:
	string name;
public:
	Dog(string name) {
		this->name = name;
	}
	string getName() {
		return this->name + " as " + typeid(this).name();
	}
	void chase(Animal* animal) {
		cout << "Me, " + this->getName() + " I chase " + animal->getName() << endl;
	}
};

int main() {
	vector<Animal*> animalsChasingList;
	animalsChasingList.push_back(new Dog("Iggy"));
	animalsChasingList.push_back(new Cat("Old Tom"));
	animalsChasingList.push_back(new Cat("Rusty"));
	animalsChasingList.push_back(new Mouse("Rodent"));
	animalsChasingList.push_back(new Cat("Tom"));
	for (int animalIndex = 0; animalIndex < animalsChasingList.size() - 1; animalIndex++) {
		animalsChasingList.at(animalIndex)->chase(animalsChasingList.at(animalIndex + 1));
	}
	// Investigate best practices in declaring variables, classes and methods in C++
	cout << endl << "New hunter in town !" << endl;
	Mouse* hunter = new Mouse("Tiny");// is this ok, as a place to declare variable ?
	for (int animalIndex = 0; animalIndex < animalsChasingList.size(); animalIndex++) {
		hunter->chase(animalsChasingList.at(animalIndex));
	}
	return(0);
}