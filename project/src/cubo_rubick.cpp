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
	std::cout << "\n";
	srand(time(nullptr));

	Cube cubo(202, 2, 15, 12, 11, 9);

	Face& arancione = cubo.getFace(Up);
	Face& verde		= cubo.getFace(Left);
	Face& bianca	= cubo.getFace(Central);
	Face& blu		= cubo.getFace(Right);
	Face& gialla	= cubo.getFace(Down);
	Face& rossa		= cubo.getFace(Back);

	opr::roundFace(bianca);
	alg::stirCube(cubo);

	graph::visualizeSide(arancione, arancione, arancione, arancione, false);
	graph::visualizeSide(verde, bianca, blu, rossa, true);
	graph::visualizeSide(gialla, gialla, gialla, gialla, false);
}

