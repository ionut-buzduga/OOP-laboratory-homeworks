#include <iostream>
#include <string>
using namespace std;
class Plant {
protected:
	string name;

	Plant(string name) {
		this->name = name;
	}
	virtual ~Plant() {}
public:
	virtual void fotosinteza() = 0;
};

class FoodSource {
protected:
	int calories;

	FoodSource(int calories) {
		this->calories = calories;
	}
	virtual ~FoodSource() {}
public:
	virtual void eat() = 0;
};

class Carrot : public Plant {
public:
	Carrot(std::string name) : Plant(name) {}

	void fotosinteza() override {
		cout << "Produced oxygen!\n";
	}
};

class Chicken : public FoodSource {
public:
	Chicken(int cal) : FoodSource(cal) {}

	void eat() override {
		cout << "Ate chicken!\n";
	}
};

class Apple : public Plant, public FoodSource {
public:
	Apple(int cal) : Plant("Apple"), FoodSource(cal) {}

	void fotosinteza() override {
		cout << "Produced oxygen!\n";
	}
	void eat() override {
		cout << "Ate apple!\n";
	}
};

int main() {
	Plant* a = new Apple(25);
	a->fotosinteza();
	FoodSource* b = new Apple(50);
	
	b->eat();

	return 0;
}