#include <iostream>
using namespace std;
class ComplexNumber {
public:
	int real;
	int imag;

	ComplexNumber(int real=0, int imag=0) {
		this->real = real;
		this->imag = imag;
	}
};

class Operations {
public:
	double nr;
	ComplexNumber z;
	bool ok;
	double module() {
		if (this->ok == 0)
			return fabs(this->nr);
		else 
			return sqrt(pow(this->z.real, 2) + pow(this->z.imag, 2));
	}
    
	void display() {
		if(this->ok==0)
		cout << "Numarul este: " << nr << "\n";
		else 
			cout << "Numarul este: " << z.real << " + " << z.imag << "i\n";
	}
    

	Operations(double nr) {
		this->nr = nr;
		this->ok = 0;
	}
	Operations(ComplexNumber z) {
		this->z =ComplexNumber (z.real, z.imag);
		this->ok = 1;
	}
};

int main() {
	double n = -4.43;
	ComplexNumber z(4, 5);

	Operations realInst(n);
	Operations compInst(z);
	
	
	realInst.display();
	double a=realInst.module();
	cout <<"Modulul este:"<< a << endl;;
	compInst.display();
	double b = compInst.module();
	cout <<"Modulul este:"<< b << endl;
	

	return 0;
}