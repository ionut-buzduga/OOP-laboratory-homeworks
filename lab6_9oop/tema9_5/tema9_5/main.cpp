#include <iostream>
#include <string>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
};

class Circle : public Shape {
public:
    void draw() { cout << "circle\n"; }
};
class Triangle : public Shape
{
public:
    void draw() { cout << "triangle\n"; }
};

class Drawing {
public:
    Shape* pShape;
    Drawing(Shape* pShape) { this->pShape = pShape; }
    void drawShape() {
        pShape->draw();
    }
};

class Test {
public:
    void test() {
        Drawing* d = new Drawing(new Triangle());
        d->drawShape();
        Drawing e( new Circle() );
        e.drawShape();
    }
};


int main()
{
    Test test;
    test.test();
    return 0;
}