#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "cube.h"


void visualizeCube(Cube);
std::string visualizeFace(const Face*);
void visualizeRow(Face*, int);

namespace std {
	std::ostream& operator<<(std::ostream& os, const Face* face);
}





#endif