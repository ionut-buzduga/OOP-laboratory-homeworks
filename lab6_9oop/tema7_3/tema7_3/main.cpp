#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <utility>

using namespace std;

class Driver {
	string name;
public:
	Driver(string name) {
		this->name = name;
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
};

class Car {
	string model;
public:
	Car(string model) {
		this->model = model;
	}
	void setModel(string model) {
		this->model = model;
	}
	string getModel() {
		return this->model;
	}
};

int main()
{
	Driver driver1("ionut"), driver2("marcel"), driver3("george");
	Car car1("opel"), car2("dacia"), car3("bmw");
	vector <pair<Driver, Car>> vect;
	vect.push_back(make_pair(driver1, car1));
	vect.push_back(make_pair(driver2, car2));
	vect.push_back(make_pair(driver3, car3)); 
		for (int i = 0; i < vect.size(); i++)
		{cout << vect[i].first.getName() << " " << vect[i].second.getModel()<<" no.="<<i+1;
	cout << endl;
}
	vect.pop_back();
	cout << vect.size();
	return 0;
}