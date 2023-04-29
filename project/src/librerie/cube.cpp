#include "cube.h"



#pragma region Facce

Face::Face() : id(generateID()) {

};

Face::Face(int value) : id(generateID()) {
	initializeFace(value);
}

void Face::initializeFace(int value) {
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			this->values[row][col] = value;
		}
	}
}



Face::~Face() {

}



#pragma endregion




#pragma region Cubo
Cube::Cube() : id(generateID()){
	this->initizializeFaces();
}
Cube::~Cube() {
	delete faces;
}

void Cube::initizializeFaces() {
	/* Inizializzo le facce del cubo */
	for (int index_facce = 0; index_facce < this->n_faces; index_facce++) {
		switch (index_facce) {
		case 0:
			/* Faccia bianca */
			(*this).faces[index_facce].initializeFace(15);
			break;

		case 1:
			/* Faccia gialla */
			this->faces[index_facce].initializeFace(11);
			break;

		case 2:
			/* Faccia rossa */
			this->faces[index_facce].initializeFace(9);
			break;

		case 3:
			/* Faccia blu */
			this->faces[index_facce].initializeFace(12);
			break;

		case 4:
			/* Faccia arancione */
			this->faces[index_facce].initializeFace(202);
			break;

		case 5:
			/* Faccia verde */
			this->faces[index_facce].initializeFace(2);
			break;
		default:
			break;
		}

	}
}


#pragma endregion
