#ifndef CUBE_H
#define CUBE_H


/* Libreria standard per utilizzare uint8_t */
#include <cstdint>
#include <iostream>
#include <string>
#include <random>


class Face{
public:
	const int id;
	std::string name = "";
	 
	Face* up = nullptr;
	Face* left = nullptr;
	Face* right = nullptr;
	Face* down = nullptr;

	const int n_rows = 3;
	const int n_cols = 3;
	int values[3][3] = {};


	Face();
	Face(int, std::string);

	void initializeFace(int);
	void setLinkedFaces(Face* up, Face* left, Face* right, Face* down);
	~Face();


};


class Cube{
public:
	const int id;
	int n_faces = 6;
	Face faces[6] = { 
		Face(15,	"Bianca"),
		Face(11,	"Gialla"),
		Face(9,		"Rossa"),
		Face(12,	"Blu"),
		Face(202,	"Arancione"),
		Face(2,		"Verde") 
	};

	/* Costruttore */
	Cube();
	/* Distruttore */
	~Cube();
	void linkFaces();


private:

};


int generateID();



#endif