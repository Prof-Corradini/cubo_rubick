#include "graphics.h"

std::string visualizeCube(const Cube& cube) {

	/* Accesso ai valori di una determinata faccia */

	/* Visualizzazione di una riga dell'array bidimensionale */

	return "";
}

std::string visualizeFace(const Face& face) {
	std::string final_str = "";
	for (int row = 0; row < face.n_rows; row++) {
		for (int col = 0; col < face.n_rows; col++) {
			final_str += std::to_string(face.values[row][col]);
			final_str += ' ';
		}
		final_str += '\n';
	}
	return final_str;
}


void visualizeRow(Face* face, int row_index) {


}



namespace std {
	std::ostream& operator<<(std::ostream& os, const Face& face) {
		os << visualizeFace(face);
		return os;
	}
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Cube& cube) {
		os << visualizeCube(cube);
		return os;
	}
}