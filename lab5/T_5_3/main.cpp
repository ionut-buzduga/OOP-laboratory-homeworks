#include <iostream> 
#include "Forms.h"

int main()
{
	Form* f = new Form();
	f->setName("forma1");

	cout << "forma: " << f->getName() << endl;

	Rectangle* r = new Rectangle();
	r->setWidth(23);
	r->setName("rectangle 1");
	//r->setColor("verde"); variabilele/functiile private nu sunt accesibile "copiilor" clasei

	cout << "rectangle name: " << r->getName() << " width:" << r->getWidth() << endl;


	return 0;
}