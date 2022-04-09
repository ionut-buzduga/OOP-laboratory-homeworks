#include <iostream>
#include <string>
using namespace std;


class Wheel {
public:
	string name;
	Wheel(string name = "oldWheel") {
		this->name = name;
	}
	void setNewWheel(string name) {
		this->name = name;
	}
};

class Hummer {
	string name;

public:
	
	Hummer(string name) {
		this->name = name;
	
	}
	void setName(string name) {
		this->name = name;
	}

	string getName() {
		return this->name;
	}
    Wheel changeWheel(Wheel wheel)
	{
		wheel.setNewWheel("newHummerWheel");
		return wheel;
	}
};

class Carriage {
	string name;
public:

	Carriage(string name) {
		this->name = name;
		
	}
	void setName(string name) {
		this->name = name;
	}
	string getName() {
		return this->name;
	}
	Wheel changeWheel(Wheel wheel)
	{
		wheel.setNewWheel("newCarriageWheel");
		return wheel;
	}
};



int main()
{
	Hummer hummer1("newHummer");
	Carriage carriage1("newCarriage");
	Wheel hummerWheel;
	Wheel carriageWheel;
	cout << hummer1.getName() << endl;
	cout << carriage1.getName()<<endl;
	cout << hummerWheel.name << endl;
	hummerWheel=hummer1.changeWheel(hummerWheel);
	cout << hummerWheel.name<<endl;
	cout << carriageWheel.name << endl;
	carriageWheel = carriage1.changeWheel(carriageWheel);
	cout << carriageWheel.name;



	return 0;
}