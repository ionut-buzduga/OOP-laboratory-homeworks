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
	string getName() {
		return this->name;
	}
	void setName(string name) {
		this->name = name;
	}
	void showMessage() {
		cout << "message from Form" << endl;
	}
	int computeArea(int width, int height) {
		return width * height;
	}
	int computeArea(int side) {
		return side * side;
	}
	int computePerimeter(int width, int height) {
		return 2 * width + 2 * height;
	}
	int computePerimeter(int side) {
		return 4 * side;
	}

};

class Rectangle : public Form {
protected:
	int width;
	int height;
public:
	Rectangle(string name, int width, int height) : Form(name) {
		this->width = width;
		this->height = height;
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getWidth() {
		return this->width;
	}
	void showMessage() {
		Form::showMessage();
		cout << "message from Rectangle" << endl;
	}
	int computeArea() {
		return Form::computeArea(this->width, this->height);
	}
	int computePerimeter() {
		return Form::computePerimeter(this->width, this->height);
	}

};

class Square : public Form {
protected:
	int side;
public:
	Square(string name, int side) :Form(name) {
		this->side = side;
	}
	void setSide(int side) {
		this->side = side;
	}
	int getSide() {
		return this->side;
	}
	void showMessage() {
		cout << "message from Square" << endl;
	}
	int computeArea() {
		return Form::computeArea(this->side);
	}
	int computePerimeter() {
		return Form::computePerimeter(this->side);
	}

};

int main()
{
	Form* f = new Form("forma1");
	cout << "forma: " << f->getName() << endl;
	f->showMessage();

	Rectangle* r = new Rectangle("rectangle 1", 1, 2);
	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;
	r->showMessage();
	cout << "Rectangle area = " << r->computeArea() << "\n";
	cout << "Rectangle perimeter = " << r->computePerimeter() << "\n";

	Square* s = new Square("square 1", 20);
	cout << "square name: " << s->getName() << " side:" << s->getSide() << endl;
	s->showMessage();
	cout << "Sqare area = " << s->computeArea() << "\n";
	cout << "Square perimeter = " << s->computePerimeter() << "\n";

	return 0;
}