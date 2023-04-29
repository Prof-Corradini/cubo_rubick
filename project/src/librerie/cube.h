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
	const int n_rows = 3;
	const int n_cols = 3;
	int values[3][3];

	Face();
	Face(int);

	void initializeFace(int);
	~Face();

};


class Cube{
public:
	const int id;
	int n_faces = 6;
	Face faces[6];

	/* Costruttore */
	Cube();
	/* Distruttore */
	~Cube();
	void initizializeFaces();


private:

};


int generateID() {
	srand(time(nullptr));
	return rand() % 1500;
}


#endif