#ifndef GRAPHICS_H
#define GRAPHICS_H


#include "../cubo/cube.h"
#include <string>
#include <iostream>
 /* Il compito dei grafici è quello di visualizzare le facce, per farlo sono state create delle matrici 3x3.
    Per visualizzare le facce si inseriscono all'interno delle matrici i valori corrispondenti ai valori 
	dei colori.
    Le celle di ogni matrice vengono colorate in base al valore contenute nella cella della matrice.*/

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