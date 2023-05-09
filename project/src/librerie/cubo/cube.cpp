#include "cube.h"
#include <random>


#pragma region Faccia

Face::Face() : id(generateID()) {
	initializeFace();
};

Face::Face(std::string name, FacePosition position, int value) : name(name), position(position), id(generateID()) {
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
	delete[] faces;
}

void Cube::initializeFaces() {
	this->faces = new Face[6]{
		Face{"Faccia in alto",		Up,			202},		/*arancione*/
		Face{"Faccia a sinistra",	Left,		2},			/*verde*/
		Face{"Faccia centrale",		Central,	15},		/*bianca*/
		Face{"Faccia a destra",		Right,		12},		/*blu*/
		Face{"Faccia posteriore",	Back,		11},		/*gialla*/
		Face{"Faccia in basso",		Down,		9}			/*rossa*/
	};
}

void Cube::linkFaces() {
	//Come guardare il cubo:
	//Faccia centrale:	bianca
	//Faccia in alto:	arancione
	// di conseguenza le altre

	Face& orange	= this->getFace(Up);
	Face& green		= this->getFace(Left);
	Face& white		= this->getFace(Central);	
	Face& blue		= this->getFace(Right);	
	Face& red		= this->getFace(Down);	
	Face& yellow	= this->getFace(Back);	

	white.setLinkedFaces(
		/*up:*/		orange,
		/*left:*/	green,
		/*right:*/	blue,
		/*down:*/	red
	);
	orange.setLinkedFaces(
		/*up:*/		yellow,
		/*left:*/	green,
		/*right:*/	blue,
		/*down:*/	white
	);
	blue.setLinkedFaces(
		/*up:*/		orange,
		/*left:*/	white,
		/*right:*/	yellow,
		/*down:*/	red
	); 
	red.setLinkedFaces(
		/*up:*/		white,
		/*left:*/	green,
		/*right:*/	blue,
		/*down:*/	yellow
	);
	green.setLinkedFaces(
		/*up:*/		orange,
		/*left:*/	yellow,
		/*right:*/	white,
		/*down:*/	red
	);
	yellow.setLinkedFaces(
		/*up:*/		orange,
		/*left:*/	blue,
		/*right:*/	green,
		/*down:*/	red
	);
}

Face& Cube::getFace(FacePosition position) {
	for (int i = 0; i < 6; i++) {
		if (this->faces[i].position == position) {
			return this->faces[i];
		}
	}
	// Gestisco l'errore nel caso non trovi la faccia
	throw std::runtime_error("Faccia non trovata");
}



int generateID() {
	return rand() % 1500;
}

#pragma endregion
