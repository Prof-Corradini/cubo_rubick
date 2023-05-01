#include "operations.h"
#include "graphics.h"

namespace opr {
	/* TODO: Parlare della classe Face della rotazione delle facce*/
	void roundUp(Face& face, bool clockwise) {
		/* Lo scopo di questa funzione � di far ruotare i valori 
		della prima riga di tutte le facce in modo da simulare la rotazione */
		/*clockwise signfica "senso orario" quindi di default il senso di rotazione � antiorario*/
		int array[3] = {};
		
		
		//Eseguo le operazioni


	}

	void roundDown(Face& face, bool clockwise) {
		int array[3] = {};

		//Eseguo le operazioni

	}

	void roundLeft(Face& face, bool clockwise) {
		int array[3] = {};

		//Eseguo le operazioni

	}

	void roundRight(Face& face, bool clockwise) {
		int array[3] = {};

		//Eseguo le operazioni

	}


	
	void roundFront(Face& face, bool clockwise) {
		/* Rotazione della faccia in senso orario o antiorario */
		/*Materiale utile:
		* https://tinyurl.com/rotazionematrice
		* https://www.youmath.it/lezioni/algebra-lineare/matrici-e-vettori/1568-matrice-trasposta.html
		*/

		int final_matrix[3][3] = {};
		int clockwise_matrix[3][3] = {
			{0, 0, 1},
			{0, 1, 0},
			{1, 0, 0}
		};
		/* Eseguo la trasposizione della matrice */
		for (int row = 0; row < face.n_rows; row++) {
			for (int col = 0; col < face.n_cols; col++) {
				final_matrix[col][row] = face.values[row][col];
			}
		}
		if (clockwise == true) {
			matrixProduct(final_matrix, clockwise_matrix);
		}

		roundUp(face); //Guardare funzione roundUp

		/* Copio la matrice trovata */
		matrixCopy(face.values, final_matrix);

	}

}



