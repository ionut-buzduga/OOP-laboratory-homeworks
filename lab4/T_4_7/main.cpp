#include <iostream>
#include <string>
using namespace std;
class Sofer {
public:
	string nume;
	Sofer() {}
	Sofer(string nume) {
		this->nume = nume;
	}
	string getNume() {
		return this->nume;
	}
	void setNume(string nume) {
		this->nume = nume;
	}
};
class Masina {
public:
	int virsta;
	Sofer sofer;
	Masina(int virsta,string Numesofer) {
		this->virsta = virsta;
		this->sofer.setNume(Numesofer);
	}
	int getVirsta() {
		return this->virsta;
	}
	Sofer getSofer() {
		return this->sofer;
	}
	void setSofer(string numeSofer) {
		this->sofer.setNume(numeSofer);
	}
	void setVirsta(int virsta) {
		this->virsta = virsta;
	}
};

void swapDrivers(Masina& c1, Masina& c2)
{
	string aux = c1.getSofer().getNume();
	c1.setSofer(c2.getSofer().getNume());
	c2.setSofer(aux);
}

int main() {
	Masina m(4, "Andrei");
	cout << "Prima masina: " << endl;
	cout << "Virsta: " << m.getVirsta() << endl;
	cout << "Sofer: " << m.getSofer().getNume() << endl;

	cout << endl;

	Masina m1(8, "Gabriel");
	cout << "A doua masina: " << endl;
	cout << "Virsta: " << m1.getVirsta() << endl;
	cout << "Sofer: " << m1.getSofer().getNume() << endl;

	cout << endl;
	swapDrivers(m, m1);
	cout << endl;
	cout << "Prima masina: " << endl;
	cout << "Virsta: " << m.getVirsta() << endl;
	cout << "Sofer: " << m.getSofer().getNume() << endl;
	cout << endl;
	cout << "A doua masina: " << endl;
	cout << "Virsta: " << m1.getVirsta() << endl;
	cout << "Sofer: " << m1.getSofer().getNume() << endl;
	return 0;
}