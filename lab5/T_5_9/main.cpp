#include <iostream>
#include <string>
using namespace std;
class Mechanism {
private:
	string name;
	int voltage;
public:
	Mechanism(string name, int voltage) {
		this->name = name;
		this->voltage = voltage;
	}
	void setName(string name) {
		this->name = name;
	}
	void setVoltage(int voltage) {
		this->voltage = voltage;
	}
	string getName() {
		return this->name;
	}
	int getVoltage() {
		return this->voltage;
	}
};

class ComputingMachine {
private:
	string name;
	int freq;
public:
	ComputingMachine(string name, int freq) {
		this->name = name;
		this->freq = freq;
	}
	void setName(string name) {
		this->name = name;
	}
	void setFreq(int freq) {
		this->freq = freq;
	}
	string getName() {
		return this->name;
	}
	int getFreq() {
		return this->freq;
	}
};

class Computer : public ComputingMachine {
private:
	int memory;
public:
	Computer(string name, int freq, int memory) : ComputingMachine(name, freq) {
		this->memory = memory;
	}
	void setMemory(int memory) {
		this->memory = memory;
	}
	int getMemory() {
		return this->memory;
	}
};

class Robot : public Mechanism, public Computer {
private:
	int noLegs;
public:
	Robot(string name, int voltage, int freq, int memory, int noLegs) :
		Mechanism(name, voltage), Computer(name, freq, memory) {
		this->noLegs = noLegs;
	}
	void setLegs(int noLegs) {
		this->noLegs = noLegs;
	}
	int getLegs() {
		return this->noLegs;
	}
};

int main() {
	Robot* r = new Robot("robot1", 300, 3, 1500, 2);

	r->setVoltage(450);
	r->setFreq(4);
	r->setMemory(5000);

	cout << r->Mechanism::getName() << " " << r->getFreq() << " " << r->getMemory() << "\n";

	delete r;

	return 0;
}