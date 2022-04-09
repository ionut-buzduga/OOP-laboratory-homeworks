#include "Forms.h"

void Form::setColor(string color) {
	this->color = color;
}
string Form::getColor() {
	return this->color;
}
string Form::getName() {
	return this->name;
}
void Form::setName(string name) {
	this->name = name;
}

void Rectangle::setWidth(int width) {
	this->width = width;
}
int Rectangle::getWidth() {
	return this->width;
}