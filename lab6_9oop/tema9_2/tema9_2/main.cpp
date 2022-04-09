#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Shape
{
public:
	virtual int area() = 0; // we define the general behavior
};
class Square: public Shape
{
	int l;
public:
	Square(int l) { this->l = l; }
	int area() { return this->l * this->l; } // we specify the behavior for this shape
};

class Rectangle : public Shape
{
	int width;
	int height;
public:
	Rectangle(int width,int height) {	this->width = width; this->height = height;}
	int area() { return this->width*this->height; } // we specify the behavior for this shape
};

class Circle : public Shape
{
	int radius;
public:
	Circle(int radius) { this->radius = radius; }
	int area() { return M_PI * this->radius * this->radius; } // we specify the behavior for this shape
};

class Drawing
{
public:
	int drawShape(Shape* pShape) // we draw the Shape. Any extension of Shape with draw() implemented.
	// An instance of Shape is injected in the drawShape method

	{
		return pShape->area();
	}
	
};
int main()
{
	Drawing* a = new Drawing();
	cout << a->drawShape(new Square(10)) << endl;
	Drawing* b = new Drawing();
	cout << b->drawShape(new Rectangle(10, 4)) << endl;
	Drawing* c = new Drawing();
	cout << c->drawShape(new Circle(10)) << endl;

	

}