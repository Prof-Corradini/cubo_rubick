#ifndef GRAPHICS_H
#define GRAPHICS_H


#include "../cubo/cube.h"
#include <string>
#include <iostream>

namespace graph {

	std::string visualizeCube(const Cube&);
	std::string visualizeFace(const Face&);
	std::string visualizeRow(Face&, int);

}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Face& face);
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Cube& cube);
}


#endif