#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "cube.h"



void visualizeCube(Cube cube) {

	/* Accesso ai valori di una determinata faccia */
	cube.faces[0].values[0][0];

	/* Visualizzazione di una riga dell'array bidimensionale */
	visualizeRow(cube.faces[0], 0);

}

void visualizeRow(Face face, int row_index) {
	

}


#endif