#include <iostream>
#include "librerie/grafica/graphics.h"
#include "librerie/algoritmi/algorithms.h"
#include "librerie/documentazione/documentation.h"
#include "librerie/operativo/operations.h"


int main()
{
	doc::title("Cubo di Rubik");
	doc::subtitle("Programma sulla simulazione e risoluzione di un cubo di Rubick");
	srand(time(nullptr));
	Cube cubo;

	Face& arancione = cubo.getFace(Up);
	Face& verde		= cubo.getFace(Left);
	Face& bianca	= cubo.getFace(Central);
	Face& blu		= cubo.getFace(Right);
	Face& gialla	= cubo.getFace(Down);
	Face& rossa		= cubo.getFace(Back);

	std::cout << bianca;

	std::cout << arancione;
	std::cout << verde;
	std::cout << bianca;
	std::cout << blu;
	std::cout << gialla;
	std::cout << rossa;

	opr::roundFace(bianca);

	alg::stirCube(cubo);


}

