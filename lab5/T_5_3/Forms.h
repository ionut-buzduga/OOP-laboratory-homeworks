#ifndef _FORMS_
#define FORMS

#include <string>

using namespace std;

class Form {
private:
	string color;

	void setColor(string color);
	string getColor();
protected:
	string name;
public:
	string getName();
	void setName(string name);
};

class Rectangle : public Form {
protected:
	int width;
	int height;
public:
	void setWidth(int width);
	int getWidth();
};

#endif