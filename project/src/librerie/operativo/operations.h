#ifndef OPERATIONS_H
#define OPERATIONS_H

#include "../cubo/cube.h"
#include "../array_utils.h"

namespace opr {

	/* Il gruppo degli operativi che si occupa di creare i movimenti del cubo ha lavorato in questo modo: 
	   hanno creato una classe in cui hanno dichiarato le varie facce e i vari limiti. 
	   Dopodichè hanno creato una funzione per caricare i colori, dalle facce laterali a quella principale,
	   tramite vettori e matrici.
	   Hanno poi utilizzato una funzione per ruotare la matrice che si sta guardando tramite un teorema
	   matematico che si basa sulla moltiplicazione delle matrici.
	   Per permettere alla matrice di girare in senso orario e antiorario sono state create 2 casistiche
	   per gestire i vettori.
	   Infine si utilizza un caricamento sequenziale per caricare il vettore d'appoggio del primo lato in 
	   sequenza.  
	   La funzione "roundFace(faccia, rotazione)" dove per faccia si intende un puntatore alla cella di 
	   memoria della matrice di quest'ultima.*/
	void roundFace(Face& face, bool clockwise = false);
}

#endif
