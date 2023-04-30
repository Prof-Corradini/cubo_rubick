#include "cube.h"



#pragma region Facce

Face::Face() : id(generateID()) {
	initializeFace(-1);
};

Face::Face(int value, std::string name) : id(generateID()), name(name) {
	initializeFace(value);
}

void Face::initializeFace(int value) {
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			this->values[row][col] = value;
		}
	}
}

void Face::setLinkedFaces(Face* up, Face* left, Face* right, Face* down){
	this->up = &*up;
	this->left = &*left;
	this->right = &*right;
	this->down = &*down;
}

Face::~Face() {

}



#pragma endregion




#pragma region Cubo
Cube::Cube() : id(generateID()){
	this->linkFaces();
}
Cube::~Cube() {
}

void Cube::linkFaces() {

	/* Linking fra le facce */
	/* Bianca (centro del cubo) */
	this->faces[0].setLinkedFaces(&this->faces[2], &this->faces[3], &this->faces[5], &this->faces[4]);

	/* Gialla */
	this->faces[1].setLinkedFaces(&this->faces[2], &this->faces[5], &this->faces[3], &this->faces[4]);


	/* Rossa */
	this->faces[2].setLinkedFaces(&this->faces[1], &this->faces[3], &this->faces[5], &this->faces[0]);

	/* Blu */
	this->faces[3].setLinkedFaces(&this->faces[2], &this->faces[1], &this->faces[0], &this->faces[4]);


	/* Arancione */
	this->faces[4].setLinkedFaces(&this->faces[0], &this->faces[3], &this->faces[5], &this->faces[1]);


	/* Verde */
	this->faces[5].setLinkedFaces(&this->faces[0], &this->faces[1], &this->faces[2], &this->faces[4]);

}



int generateID() {
	return rand() % 1500;
}

#pragma endregion
