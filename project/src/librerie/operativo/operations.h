#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "../cubo/cube.h"
#include "../array_utils.h"

namespace opr {
	enum Operations {
		RotateUp,
		RotateLeft,
		RotateRight,
		RotateDown,
		RotateFront
	};

	void roundUp(Face& face, Operations start_operation, bool clockwise = false);
	void roundUp(Cube& cube, bool clockwise = false);
	void roundDown(Face& face, Operations start_operation, bool clockwise = false);
	void roundLeft(Face& face, Operations start_operation, bool clockwise = false);
	void roundRight(Face& face, Operations start_operation, bool clockwise = false);
	void roundFront(Face& face, Operations start_operation, bool clockwise = false);
}

#endif
