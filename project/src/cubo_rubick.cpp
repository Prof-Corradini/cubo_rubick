#include <iostream>
#include "librerie/grafica/graphics.h"
#include "librerie/algoritmi/algorithms.h"
#include "librerie/documentazione/documentation.h"
#include "librerie/operativo/operations.h"


int main()
{
	doc::title("Cubo di Rubick");
	doc::subtitle("Programma sulla simulazione e risoluzione di un cubo di Rubick");
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

	std::cout << '\n';
	std::cout << bianca << '\n';
	opr::roundFront(bianca, false);
	std::cout << bianca << '\n';
	std::cout << '\n';

	std::cout << '\n';
	std::cout << gialla << '\n';
	opr::roundFront(gialla, true);
	std::cout << gialla << '\n';
	std::cout << '\n';
}

