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

	int checkCube(Cube& cube) {
		/* Controllo la faccia 0*/
		int situazione_faccia_0 = checkFace(cube.faces[0]);
	



	}

	int checkFace(Face& face){
		//Caso migliore
		if (face.values[0][1] == 12 && *face.lim_up[1] == face.values[1][1]) {
			return 1;
		}
		if (face.values[1][0] == 12 && *face.lim_left[1] == face.values[1][1]) {
			return 1;
		}
		if (face.values[1][2] == 12 && *face.lim_right[1] == face.values[1][1]) {
			return 1;
		}
		if (face.values[2][1] == 12 && *face.lim_down[1] == face.values[1][1]) {
			return 1;
		}

		//Secondo caso
		if (face.left->values[2][1] == face.values[1][1] && *face.left->lim_down[1] == 12) {
			return 2;
		}
		if (face.left->left->values[2][1] == face.values[1][1] && *face.left->left->lim_down[1] == 12) {
			return 2;
		}
		if (face.right->values[2][1] == face.values[1][1] && *face.right->lim_down[1] == 12) {
			return 2;
		}



		return 0;
	}

	void whiteCross(Cube& cube) {
		Face& up = cube.getFace(Up);
		Face& central = cube.getFace(Central);
		Face& left = cube.getFace(Left);
		Face& right = cube.getFace(Right);
		Face& down = cube.getFace(Down);
		Face& back = cube.getFace(Back);
		

		int situazione_faccia_0 = checkFace(cube.faces[0]);
		int situazione_faccia_1 = checkFace(cube.faces[1]);
		int situazione_faccia_2 = checkFace(cube.faces[2]);


		if (back.values[2][1] == 12 && *back.lim_down[1] == 202) {
			opr::roundFace(back);
			opr::roundFace(back);
		}
		

		
		if (central.values[0][0] == 12 && left.values[0][0] == 202) {
			opr::roundFace(up);
		}

		if (checkFace(up)) {
			for (;*up.lim_up[1] != central.values[1][1];) {
				opr::roundFace(up);
			}
		}

		if (checkFace(up)) {
			for (; *up.lim_up[1] != central.values[1][1];) {
				opr::roundFace(up);
			}
		}

		for (int i = 0; i < 4; i++) {
			// Look for a white edge piece on the cube
			while (/*cube.face[0].values[1][1] != WHITE || cube[0][1] == WHITE*/ false) {
				//cube.face[0].values[1][1];
				//cube.getFace(Central).values[1][1]face[0]:
				//face[1];
				//opr::roundFace(cube.getFace(Central));
				//opr::roundFace(cube.getFace(Left));
				//opr::roundFace(cube.getFace(Down));
				//opr::roundFace(cube.getFace(Back));
			}
		}
	}
}
