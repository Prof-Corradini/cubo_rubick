#ifndef CUBE_H
#define CUBE_H


/* Libreria standard per utilizzare uint8_t */
#include <cstdint>



class Face{
public:
	const int row = 3;
	const int col = 3;
	int values[3][3];

	Face();
	Face(int);

	void initializeFace(int);
	~Face();

};


class Cube{
public:
	Face faces[6];

	/* Costruttore */
	Cube();
	/* Distruttore */
	~Cube();
	void initizializeFaces();


private:

};



#endif