#include <iostream>
using namespace std;
class ComplexNumber {
public:
	double real;
	double imag;

	ComplexNumber(double real, double imag) {
		this->real = real;
		this->imag = imag;
	}
};

class Operations {
public:
	double* n1 = nullptr;
	double* n2 = nullptr;

	ComplexNumber* z1 = nullptr;
	ComplexNumber* z2 = nullptr;

	static double addition(double n1, double n2) {
		return n1 + n2;
	}
	static ComplexNumber addition(ComplexNumber z1, ComplexNumber z2) {
		ComplexNumber sum(z1.real + z2.real, z1.imag + z2.imag);
		return sum;
	}

	static double subtraction(double n1, double n2) {
		return n1 - n2;
	}
	static ComplexNumber subtraction(ComplexNumber z1, ComplexNumber z2) {
		ComplexNumber dif(z1.real - z2.real, z1.imag - z2.imag);
		return dif;
	}

	static double multiplication(double n1, double n2) {
		return n1 * n2;
	}
	static ComplexNumber multiplication(ComplexNumber z1, ComplexNumber z2) {
		ComplexNumber prod(z1.real * z2.real, z1.imag * z2.imag);
		return prod;
	}

	static double division(double n1, double n2) {
		return n1 / n2;
	}
	static ComplexNumber division(ComplexNumber z1, ComplexNumber z2) {
		ComplexNumber div(z1.real / z2.real, z1.imag / z2.imag);
		return div;
	}

	Operations(double n1, double n2) {
		this->n1 = new double(n1);
		this->n2 = new double(n2);
	}
	Operations(ComplexNumber z1, ComplexNumber z2) {
		this->z1 = new ComplexNumber(z1.real, z1.imag);
		this->z2 = new ComplexNumber(z2.real, z2.imag);
	}
	~Operations() {
		delete n1;
		delete n2;
		delete z1;
		delete z2;
	}
};

int main() {
	double num1 = 12.8;
	double num2 = 6.6;

	Operations realInst(num1, num2);

	auto result1 = realInst.addition(*realInst.n1, *realInst.n2);
	cout << result1 << "\n";
	auto result2 = realInst.subtraction(*realInst.n1, *realInst.n2);
	cout << result2 << "\n";
	auto result3 = realInst.multiplication(*realInst.n1, *realInst.n2);
	cout << result3 << "\n";
	auto result4 = realInst.division(*realInst.n1, *realInst.n2);
	cout << result4 << "\n";

	ComplexNumber* z1 = new ComplexNumber(3.7, 7.2);
	ComplexNumber* z2 = new ComplexNumber(4.5, 8.1);

	Operations compInst(*z1, *z2);

	auto result5 = compInst.addition(*compInst.z1, *compInst.z2);
	cout << "(" << result5.real << ", " << result5.imag << ")\n";
	auto result6 = compInst.subtraction(*compInst.z1, *compInst.z2);
	cout << "(" << result6.real << ", " << result6.imag << ")\n";
	auto result7 = compInst.multiplication(*compInst.z1, *compInst.z2);
	cout << "(" << result7.real << ", " << result7.imag << ")\n";
	auto result8 = compInst.division(*compInst.z1, *compInst.z2);
	cout << "(" << result8.real << ", " << result8.imag << ")\n";

	delete z1;
	delete z2;

	return 0;
}