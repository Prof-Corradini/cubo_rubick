#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "cube.h"

void visualizeCube(Cube);
void visualizeFace(Face*);
void visualizeRow(Face*, int);

namespace std {
	std::ostream& operator<<(std::ostream& os, const Face* face) {
		std::string final_str = "";
		for (int row = 0; row < face->n_rows; row++) {
			for (int col = 0; col < face->n_rows; col++) {
				final_str += std::to_string(face->values[row][col]);
				final_str += ' ';
			}
			final_str += '\n';
		}
		return std::operator<<(os, final_str);
	}
}


void visualizeCube(Cube cube) {

	/* Accesso ai valori di una determinata faccia */
	cube.faces[0].values[0][0];

	/* Visualizzazione di una riga dell'array bidimensionale */
	visualizeRow(&cube.faces[0], 0);

}

std::string visualizeFace(const Face* face) {
	std::string final_str = "";
	for (int row = 0; row < face->n_rows; row++) {
		for (int col = 0; col < face->n_rows; col++) {
			final_str += std::to_string(face->values[row][col]);
			final_str += ' ';
		}
		final_str += '\n';
	}
	return final_str;
}


void visualizeRow(Face* face, int row_index) {
	

}






#endif