#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "../cubo/cube.h"
#include "../array_utils.h"

namespace opr {


	void roundUp(Face& face, bool prev_front_rotation, bool clockwise = false);
	void roundDown(Face& face, bool prev_front_rotation, bool clockwise = false);
	void roundLeft(Face& face, bool prev_front_rotation, bool clockwise = false);
	void roundRight(Face& face, bool prev_front_rotation, bool clockwise = false);
	void roundFront(Face& face, bool clockwise);
}

#endif
