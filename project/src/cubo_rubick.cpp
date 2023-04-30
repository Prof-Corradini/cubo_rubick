#include <iostream>
#include "librerie/graphics.h"



int main()
{
	srand(time(nullptr));

	Cube cubo;

	std::cout << cubo.getFace(Bianca);
	std::cout << cubo.getFace(Rossa);
	std::cout << cubo.getFace(Gialla);
	std::cout << cubo.getFace(Verde);
	std::cout << cubo.getFace(Blu);
	std::cout << cubo.getFace(Arancione);

}

