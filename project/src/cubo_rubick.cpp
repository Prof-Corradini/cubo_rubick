#include <iostream>
#include "librerie/graphics.h"



int main()
{
	srand(time(nullptr));
	Cube cubo;


	cubo.initizializeFaces();

	std::cout << &cubo.faces[0];
	std::cout << &cubo.faces[1];
	std::cout << &cubo.faces[2];
	std::cout << &cubo.faces[3];
	std::cout << &cubo.faces[4];
	std::cout << &cubo.faces[5];

}

