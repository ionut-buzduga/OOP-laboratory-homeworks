#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

class Shape
{
public:
	virtual int area() = 0; // we define the general behavior
};
class Square : public Shape
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
	Rectangle(int width, int height) { this->width = width; this->height = height; }
	int area() { return this->width * this->height; } // we specify the behavior for this shape
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
	vector<Shape*> sumVector;

	sumVector.push_back(new Square(10));
	sumVector.push_back(new Rectangle(10,4));
	sumVector.push_back(new Circle(10));
	sumVector.push_back(new Square(5));
	int s = 0;
	for (int sumIndex = 0; sumIndex < sumVector.size(); sumIndex++) {
		s+=sumVector.at(sumIndex)->area();
	}
	cout << s;
	return 0;
}