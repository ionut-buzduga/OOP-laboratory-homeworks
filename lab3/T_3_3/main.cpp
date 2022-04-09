#include <iostream>
using namespace std;

class Complex {
public:
	Complex(double r=0,double i=0)
	{
		cout << "constructor called"<<endl;
		real = r;
		imaginary = i;


	}
	void add(double& r, double& i);
private:
	double real;
	double imaginary;
};

void Complex::add(double& r,double &i)
{
	r = r + real;
	i = i + imaginary;
}

int main()
{
	double r = 0,i=0,r1,r2,i1,i2;
	cout << "Give two complex numbers:";
	cin >> r1 >> i1 >> r2 >> i2;
	Complex C1(r1, i1);
	Complex C2(r2, i2);
	Complex* ptr;
	ptr = &C1;
	ptr->add(r,i);
	ptr = &C2;
	ptr->add(r,i);
	
	cout <<"The real part is:"<< r<<endl<<"The imaginary part is:"<<i;
	return 0;
}