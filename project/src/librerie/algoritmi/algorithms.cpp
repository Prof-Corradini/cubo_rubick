#include "algorithms.h"
#include "../operativo/operations.h"
#include "../grafica/graphics.h"
#include <random>

namespace alg {

	/* Scombina il cubo */
	void stirCube(Cube& cube) {
		int min = 5;
		int max = 100;
		int n_times = min + (rand() % 100 - min);
		Face* pointed_face = &cube.faces[0];
		
		for (int i = 0; i < n_times; i++) {
			//Azione: opr::roundFace(*pointed_face, direction);
			//Faccia successiva? pointed_face = pointed_face->up;
			//Senso di rotazione?
		}
	}
}