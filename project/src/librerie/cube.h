#ifndef CUBE_H
#define CUBE_H


/* Libreria standard per utilizzare uint8_t */
#include <cstdint>
#include <iostream>
#include <string>
#include <random>


enum FaceType{
	Nessuno,
	Bianca,
	Gialla,
	Rossa,
	Blu,
	Arancione,
	Verde
};

class Face{
public:
	const int id;
	FaceType type = Nessuno;
	 
	Face* up = nullptr;
	Face* left = nullptr;
	Face* right = nullptr;
	Face* down = nullptr;

	const int n_rows = 3;
	const int n_cols = 3;
	int values[3][3] = {};


	Face();
	Face(FaceType, int);

	void initializeFace(int);
	void setLinkedFaces(Face* up, Face* left, Face* right, Face* down);
	~Face();


};


class Cube{
public:
	const int id;
	int n_faces = 6;
	Face faces[6] = { 
		Face(Bianca,	15),
		Face(Gialla,	11),
		Face(Rossa,		9),
		Face(Blu,		12),
		Face(Arancione, 202),
		Face(Verde,		2)
	};

	/* Costruttore */
	Cube();
	/* Distruttore */
	~Cube();
	void linkFaces();
	Face* getFace(FaceType name);


private:

};


int generateID();



#endif