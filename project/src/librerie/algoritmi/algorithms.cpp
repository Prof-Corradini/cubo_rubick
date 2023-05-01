#include "algorithms.h"
#include "../operativo/operations.h"
#include <random>

namespace alg {

	/* Scombina il cubo */
	void stirCube(Cube& cube) {
		opr::roundUp(cube);
		opr::roundDown(cube);
	}
}