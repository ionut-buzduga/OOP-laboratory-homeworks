#include <iostream>
using namespace std;
class A
{
public:
	int aa;
protected:
	int ab;
private:
	int ac;
public: void testA() {
	aa = 1;
	ab = 2;
	this->ac = 3;
	}
	  void get()
	  {
		  cout << "In class A:" << endl;
		  cout <<"aa="<< aa << " ab="<<ab << " ac=" << ac << endl;
	  }
};
class B : protected A //aa protected,ab protected,ac not accesible
{                   
public:
int ba;
protected:
int bb;
private:
int bc;
public: void testB() {
	ba = 4;
	bb = 5;
	this->bc = 6;
	aa = 2;
	ab = 6;
	}
	  void get()
	  {
		  cout << "In class B:" << endl;
		  cout << "aa=" << aa << " ab=" << ab << " ba=" <<ba <<" bb="<<bb<<" bc="<<bc<< endl;
	  }
};
class C : public B//ba public  bb protected
{
public:
int ca;
protected:
int cb;
private:
int cc;
public: void testC() {
	ca = 7;
	cb = 8;
	cc = 9;
	ba = 10;
	bb = 11;
	}
	  void get()
	  {
		  cout << "In class C:" << endl;
		  cout << "ca=" << ca << " cb=" << cb << " cc=" <<cc << " ba=" << ba << " bb=" << bb << endl;
	  }
};

int main()
{
	A a1; B b1; C c1;
    a1.testA();
	a1.get();
	b1.testB();
	b1.get();
	c1.testC();
	c1.get();
	return 0;
}