#include <iostream>
#include <windows.h>
#include "librerie/grafica/graphics.h"
#include "librerie/algoritmi/algorithms.h"
#include "librerie/documentazione/documentation.h"
#include "librerie/operativo/operations.h"


int main()
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r); //stores the console's current dimensions
	MoveWindow(console, r.left, r.top, 1700, 1000, TRUE); // 800 width, 100 height

	doc::title("Cubo di Rubik");
	doc::subtitle("Programma sulla simulazione e risoluzione di un cubo di Rubick");
	srand(time(nullptr));

	Cube cubo(202, 2, 15, 12, 11, 9);

	Face& arancione = cubo.getFace(Up);
	Face& verde		= cubo.getFace(Left);
	Face& bianca	= cubo.getFace(Central);
	Face& blu		= cubo.getFace(Right);
	Face& gialla	= cubo.getFace(Down);
	Face& rossa		= cubo.getFace(Back);


	std::cout << arancione;
	std::cout << verde;
	std::cout << bianca;
	std::cout << blu;
	std::cout << gialla;
	std::cout << rossa;
	
	/*
	std::cout << graph::visualizeFaceRow(bianca);
	std::cout << graph::visualizeFaceRow(arancione);
	std::cout << graph::visualizeFaceRow(blu);
	std::cout << graph::visualizeFaceRow(verde);
	std::cout << graph::visualizeFaceRow(rossa);
	std::cout << graph::visualizeFaceRow(gialla);
	*/

	opr::roundFace(bianca);
	graph::pattern();
	alg::stirCube(cubo);


}

