#include <iostream>
#include <cmath>


using namespace std;

class ComplexNumber {
public:
	double real;
	double imag;

	ComplexNumber() {}
	ComplexNumber(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}

	double absValue() {
		return sqrt(pow(this->real, 2) + pow(this->imag, 2));
	}
	
};


template <class T>
T GetMin(T a, T b) {
	T result;
	result = (a < b) ? a : b;
	return (result);
}

int main() {

	ComplexNumber a(2, 7);
	ComplexNumber b(2, 8);

	double c = GetMin<double>(a.absValue(), b.absValue());
	if (a.absValue() == c)
		cout << a.real <<" "<< a.imag << "i";
	else 
		cout << b.real <<" "<< b.imag << "i";

	

	return 0;
}