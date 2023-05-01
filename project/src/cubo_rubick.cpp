#include <iostream>
#include "librerie/graphics.h"
#include "librerie/algorithms.h"


int main()
{
	srand(time(nullptr));

	Cube cubo;
	Face& bianca =		cubo.getFace(Face_1); 
	Face& gialla =		cubo.getFace(Face_2); 
	Face& rossa =		cubo.getFace(Face_3); 
	Face& blu =			cubo.getFace(Face_4); 
	Face& arancione =	cubo.getFace(Face_5); 
	Face& verde =		cubo.getFace(Face_6); 

	std::cout << bianca;
	std::cout << gialla;
	std::cout << rossa;
	std::cout << blu;
	std::cout << arancione;
	std::cout << verde;


	opr::roundFront(bianca, false);
	/* Non funzionante */
	opr::roundFront(gialla, true);
	std::cout << bianca;
	std::cout << gialla;
}

