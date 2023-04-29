#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "cube.h"

void roundUp(Cube* cube, Face* face);
void roundDown(Cube* cube, Face* face);
void roundLeft(Cube* cube, Face* face);
void roundRight(Cube* cube, Face* face);
bool checkFace(Cube* cube, Face* face);

void roundUp(Cube *cube, Face *face) {
	checkFace(cube, face);
	//Eseguo le operazioni

}

void roundDown(Cube* cube, Face* face) {
	checkFace(cube, face);
	//Eseguo le operazioni

}

void roundLeft(Cube* cube, Face* face) {
	checkFace(cube, face);
	//Eseguo le operazioni

}

void roundRight(Cube* cube, Face* face) {
	checkFace(cube, face);
	//Eseguo le operazioni

}




//Controllo che la faccia passata faccia parte delle facce cubo tramite l'id
bool checkFace(Cube* cube, Face* face){

	return true;
}


#endif
