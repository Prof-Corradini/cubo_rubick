#include "cube.h"



#pragma region Facce

Face::Face() : id(generateID()) {
	initializeFace(-1);
};

Face::Face(FaceType type, int value) : id(generateID()), type(type) {
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

	for (Face face : this->faces) {
		switch (face.type) {
		case Bianca:
			face.setLinkedFaces(
				this->getFace(Rossa),				//Up
				this->getFace(Blu),					//Left
				this->getFace(Verde),				//Right
				this->getFace(Arancione)			//Down
			);
			break;
		case Gialla:
			face.setLinkedFaces(
				this->getFace(Rossa),				//Up
				this->getFace(Verde),				//Left
				this->getFace(Blu),					//Right
				this->getFace(Arancione)			//Down
			);
			break;
		case Rossa:
			face.setLinkedFaces(
				this->getFace(Gialla),				//Up
				this->getFace(Blu),					//Left
				this->getFace(Verde),				//Right
				this->getFace(Bianca)				//Down
			);
			break;
		case Blu:
			face.setLinkedFaces(
				this->getFace(Rossa),				//Up
				this->getFace(Gialla),				//Left
				this->getFace(Bianca),				//Right
				this->getFace(Arancione)			//Down
			);
			break;
		case Arancione:
			face.setLinkedFaces(
				this->getFace(Bianca),				//Up
				this->getFace(Blu),					//Left
				this->getFace(Verde),				//Right
				this->getFace(Gialla)				//Down
			);
			break;
		case Verde:
			face.setLinkedFaces(
				this->getFace(Bianca),				//Up
				this->getFace(Gialla),				//Left
				this->getFace(Rossa),				//Right
				this->getFace(Arancione)			//Down
			);
			break;
		}
	}
}

Face* Cube::getFace(FaceType name) {
	for (Face face : this-> faces){
		if (face.type == name) {
			return &face;
		}
	}
	return nullptr;
}

int generateID() {
	return rand() % 1500;
}

#pragma endregion
