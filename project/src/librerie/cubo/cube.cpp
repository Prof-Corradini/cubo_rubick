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
	
	this->lim_up = new int*[3];
	if (this->up != nullptr) {
		this->lim_up[0] = &this->up->values[2][0];
		this->lim_up[1] = &this->up->values[2][1];
		this->lim_up[2] = &this->up->values[2][2];
	}

	this->left = &left;
	this->lim_left = new int*[3];
	if (this->left != nullptr) {
		this->lim_left[0] = &this->left->values[0][2];
		this->lim_left[1] = &this->left->values[1][2];
		this->lim_left[2] = &this->left->values[2][2];
	}
	this->right = &right;
	this->lim_right = new int*[3];
	if (this->right != nullptr) {
		this->lim_right[0] = &this->right->values[0][0];
		this->lim_right[1] = &this->right->values[1][0];
		this->lim_right[2] = &this->right->values[2][0];
	}
	this->down = &down;
	this->lim_down = new int*[3];
	if (this->down != nullptr) {
		this->lim_down[0] = &this->down->values[0][0];
		this->lim_down[1] = &this->down->values[0][1];
		this->lim_down[2] = &this->down->values[0][2];
	}
}

Face::~Face() {
}

Face& Face::getFace() {
	return *this;
}

#pragma endregion




#pragma region Cubo
Cube::Cube(int up_color, int left_color, int central_color, int right_color, int back_color, int down_color) : id(generateID()){
	this->initializeFaces(up_color, left_color, central_color, right_color, back_color, down_color);
	this->linkFaces();
}
Cube::~Cube() {
	delete[] faces;
}

void Cube::initializeFaces(int up_color, int left_color, int central_color, int right_color, int back_color, int down_color) {
	this->faces = new Face[6]{
		Face{"Faccia in alto",		Up,			up_color},			/*arancione*/
		Face{"Faccia a sinistra",	Left,		left_color},		/*verde*/
		Face{"Faccia centrale",		Central,	central_color},		/*bianca*/
		Face{"Faccia a destra",		Right,		right_color},		/*blu*/
		Face{"Faccia posteriore",	Back,		back_color},		/*gialla*/
		Face{"Faccia in basso",		Down,		down_color}			/*rossa*/
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
