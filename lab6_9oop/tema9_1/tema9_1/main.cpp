#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
	virtual void draw() = 0; // we define the general behavior
};
class Circle : public Shape
{
public:
	void draw() { cout << "circle\n"; } // we specify the behavior for this shape
};
class Triangle : public Shape
{
public:
	void draw() { cout << "triangle\n"; } // we specify the behavior for this shape
};
class Drawing
{
	Shape *pShape;
public:
	Drawing(Shape *pShape) {
		this->pShape = pShape;
	}
	void drawShape() // we draw the Shape. Any extension of Shape with draw() implemented.
	// An instance of Shape is injected in the drawShape method

	{
		this->pShape->draw();
	}
	/* Doesn't work. Why ? Try to use this code
	void drawShape(Shape pShape)
	{
	pShape->draw();
	}
	*/
};
int main()
{
	Drawing* d = new Drawing(new Triangle());
	d->drawShape();
	Drawing* c = new Drawing(new Circle());
	c->drawShape();
}