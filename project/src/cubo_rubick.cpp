#include <iostream>
#include "librerie/graphics.h"



int main()
{

	//Ciao a tutti, benvenuti nel magico mondo bello!!!
	//samuele silvestrini 0
	Cube cubo;

	cubo.initizializeFaces();


	std::cout << &cubo.faces[0];
	std::cout << &cubo.faces[1];
	std::cout << &cubo.faces[2];
	std::cout << &cubo.faces[3];
	std::cout << &cubo.faces[4];
	std::cout << &cubo.faces[5];

}

