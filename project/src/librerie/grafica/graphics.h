#ifndef GRAPHICS_H
#define GRAPHICS_H


#include "../cubo/cube.h"
#include <string>
#include <iostream>

namespace graph {

	std::string visualizeCube(const Cube&);
	std::string visualizeFace(const Face&);
	std::string visualizeRow(Face&, int, bool);
	int pattern();
	std::string addFrame(std::string str);
	std::string repeat(std::string str, int n_times);
	void visualizeSide(Face& face1, Face& face2, Face& face3, Face& face4, bool);
	
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Face& face);
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Cube& cube);
}


#endif