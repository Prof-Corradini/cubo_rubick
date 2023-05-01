#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "cube.h"
#include "utils.h"

namespace opr {
	void roundUp(Face& face, bool clockwise = false);
	void roundDown(Face& face, bool clockwise = false);
	void roundLeft(Face& face, bool clockwise = false);
	void roundRight(Face& face, bool clockwise = false);
	void roundFront(Face& face,  bool clockwise = false);
}

#endif
