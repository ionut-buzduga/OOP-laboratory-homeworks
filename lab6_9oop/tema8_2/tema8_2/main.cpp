#include <iostream>
#include <math.h>
using namespace std;

class ComplexNumber {
public:
    double real;
    double imag;
    ComplexNumber() {
        real = 0;
        imag = 0;
    }
    ComplexNumber(double real_part_val, double imaginary_part_val) : real{ real_part_val }, imag{ imaginary_part_val } {}
};

class Operations {
private:
    double realNumber = 0;
    ComplexNumber complexNumber;
    bool ok;
public:
    Operations(double realNumber) { this->realNumber = realNumber; ok = 0; }
    Operations(ComplexNumber complex) {
        complexNumber.real = complex.real;
        complexNumber.imag = complex.imag;
        ok = 1;
    }
    double module() {
        if (!ok)
            if (realNumber > 0)
                return realNumber;
            else
                return -realNumber;
        return sqrt(pow(complexNumber.real, 2) + pow(complexNumber.imag, 2));
    }
    bool operator < (Operations& obj) {
        return this->module() < obj.module();
    }
    bool operator > (Operations& obj) {
        return this->module() > obj.module();
    }
};


int main() {
    ComplexNumber complexNumber{ 2, 5 };
    Operations operation1( 7 );
    Operations operation2{ complexNumber };

    if (operation1 < operation2) {
        cout << operation1.module() << endl;
    }
    else {
        cout << operation2.module() << endl;
    }

    cout << operation1.module() << endl;
    cout << operation2.module() << endl;
    

}