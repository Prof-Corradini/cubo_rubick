#ifndef GRAPHICS_H
#define GRAPHICS_H


#include "../cubo/cube.h"
#include <string>
#include <iostream>
 /* Il compito dei grafici è quello di visualizzare le facce, per farlo sono state create delle matrici 3x3.
    Per visualizzare le facce si inseriscono all'interno delle matrici i valori corrispondenti ai valori 
	dei colori.
    Le celle di ogni matrice vengono colorate in base al valore contenute nella cella della matrice.
	Successivamente è stata creata una funzione che prende in input le facce da stampare, e una variabile
	booleana che controlla le matrici da visualizzare, stamperà riga per riga le quattro matrici, o solo la seconda se la variabile
	booleana è impostata su false, riempiendo lo spazio delle altre matrici con degli spazi, questa funzione viene richiamata tre volte
	una per ogni lato.
	La funzione VisualizeSide è la funzione principale che regola come stampare, mentre VisualizeRow è la funzione di stampa.*/

namespace graph {

	std::string visualizeCube(const Cube&);
	std::string visualizeFace(const Face&);
	std::string visualizeRow(Face&, int);

}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Face& face);
}

namespace std {
	std::ostream& operator<<(std::ostream& os, const Cube& cube);
}


#endif