#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "cube.h"


std::string visualizeCube(const Cube&);
std::string visualizeFace(const Face&);
void visualizeRow(Face*, int);


namespace std {
	std::ostream& operator<<(std::ostream& os, const Face& face);
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Cube& cube);
}


#endif