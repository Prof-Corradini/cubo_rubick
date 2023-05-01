#include "cube.h"



#pragma region Facce

Face::Face() : id(generateID()) {
	initializeFace();
};

Face::Face(FaceType type, int value) : type(type), id(generateID()) {
	initializeFace(value);
}

void Face::initializeFace(int value) {
	int count = 0;
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 3; col++) {
			if (value == -1) {
				this->values[row][col] = count++;
				continue;
			}
			this->values[row][col] = value;
		}
	}
}

void Face::setLinkedFaces(Face& up, Face& left, Face& right, Face& down){
	this->up = &up;
	this->left = &left;
	this->right = &right;
	this->down = &down;
}

Face::~Face() {

}

Face& Face::getFace() {
	return *this;
}

#pragma endregion




#pragma region Cubo
Cube::Cube() : id(generateID()){
	this->initializeFaces();
	this->linkFaces();
}
Cube::~Cube() {
}
void Cube::initializeFaces() {
	this->faces = new Face[6]{
		Face{Face_1,	/*,15*/ },	/*bianca*/
		Face{Face_2, /*11*/},			/*gialla*/
		Face{Face_3, 9},			/*rossa*/
		Face{Face_4, 12},			/*blu*/
		Face{Face_5, 202},			/*arancione*/
		Face{Face_6, 2}				/*verde*/
	};
}

void Cube::linkFaces() {
	Face& face_1	= this->getFace(Face_1); /*bianca*/	
	Face& face_2	= this->getFace(Face_2); /*gialla*/	
	Face& face_3	= this->getFace(Face_3); /*rossa*/	
	Face& face_4	= this->getFace(Face_4); /*blu*/	
	Face& face_5	= this->getFace(Face_5); /*arancione*/	
	Face& face_6	= this->getFace(Face_6); /*verde*/	

	face_1.setLinkedFaces(
		face_2,			//Up
		face_4,			//Left
		face_6,			//Right
		face_5			//Down
	);

	face_2.setLinkedFaces(
		face_3,			//Up
		face_6,			//Left
		face_4,			//Right
		face_5			//Down
	);

	face_3.setLinkedFaces(
		face_2,			//Up
		face_4,			//Left
		face_6,			//Right
		face_1			//Down
	);

	face_4.setLinkedFaces(
		face_3,			//Up
		face_2,			//Left
		face_1,			//Right
		face_5			//Down
	);

	face_5.setLinkedFaces(
		face_1,			//Up
		face_4,			//Left
		face_6,			//Right
		face_2			//Down
	);

	face_6.setLinkedFaces(
		face_1,			//Up
		face_2,			//Left
		face_3,			//Right
		face_5			//Down
	);

}

Face& Cube::getFace(FaceType name) {
	for (int i = 0; i < 6; i++) {
		if (this->faces[i].type == name) {
			return this->faces[i];
		}
	}
	// Handle the case when the FaceType is not found
	throw std::runtime_error("FaceType not found");
}


int generateID() {
	return rand() % 1500;
}

#pragma endregion
