#include <iostream>
#include <string>

using namespace std;

class Form {
private:
	string color;
protected:
	string name;
	void setColor(string color) {
		this->color = color;
	}
public:
	Form(string name) {
		this->name = name;
	}
	~Form() {
		cout << "Form destructed!\n";
	}
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
};

class Rectangle :public Form {
protected:
	int width;
	int height;
public:
	Rectangle(string name, int width, int height) : Form(name) {
		this->width = width;
		this->height = height;
	}
	~Rectangle() {
		cout << "Rectangle destroyed!\n";
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
};

int main()
{
	Form* f = new Form("forma1");
	cout << "forma: " << f->getName() << endl;

	Rectangle* r = new Rectangle("rectangle 1", 1, 2);
	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;

	delete f;
	delete r;

	return 0;
}