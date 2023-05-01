#ifndef CUBE_H
#define CUBE_H


/* Libreria standard per utilizzare uint8_t */
#include <cstdint>
#include <iostream>
#include <string>
#include <random>


enum FaceType{
	None,
	Face_1,
	Face_2,
	Face_3,
	Face_4,
	Face_5,
	Face_6
};

class Face{
public:
	const int id;
	FaceType type = None;
	 
	Face* up = nullptr;
	Face* left = nullptr;
	Face* right = nullptr;
	Face* down = nullptr;

	const int n_rows = 3;
	const int n_cols = 3;
	int values[3][3] = {};


	Face();
	Face(FaceType, int = -1);

	Face& getFace();

	void initializeFace(int = -1);
	void setLinkedFaces(Face& up, Face& left, Face& right, Face& down);
	~Face();


};


class Cube{
public:
	const int id;
	int n_faces = 6;
	Face* faces;
	/* Costruttore */
	Cube();
	/* Distruttore */
	~Cube();
	void initializeFaces();
	void linkFaces();
	Face& getFace(FaceType name);


private:

};


int generateID();



#endif