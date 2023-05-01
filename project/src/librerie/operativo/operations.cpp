#include "operations.h"
#include "../grafica/graphics.h"

namespace opr {



	/* TODO: Parlare della classe Face e della rotazione delle facce*/
	void roundUp(Face& face, Operations start_operation, bool clockwise) {
		/* Lo scopo di questa funzione è di far ruotare i valori 
		della prima riga di tutte le facce in modo da simulare la rotazione */

		/*clockwise signfica "senso orario"
		il suo valore di default è false quindi
		il senso di rotazione è antiorario*/

		int array[3] = {};
		switch (start_operation) {
			case RotateUp:
			break;
			case RotateLeft:
				break;
			case RotateRight:
				break;
			case RotateDown:
				break;
			case RotateFront:
				break;
		}
		
		//Eseguo le operazioni

	}
	
	void roundUp(Cube& cube, bool clockwise){
	
	}

	void roundDown(Face& face, Operations start_operation, bool clockwise) {
		int array[3] = {};

		//Eseguo le operazioni

		switch (start_operation) {
		case RotateUp:
			break;
		case RotateLeft:
			break;
		case RotateRight:
			break;
		case RotateDown:
			break;
		case RotateFront:
			break;
		}

	}

	void roundLeft(Face& face, Operations start_operation, bool clockwise) {
		int array[3] = {};

		//Eseguo le operazioni
		switch (start_operation) {
		case RotateUp:
			break;
		case RotateLeft:
			break;
		case RotateRight:
			break;
		case RotateDown:
			break;
		case RotateFront:
			break;
		}

	}

	void roundRight(Face& face, Operations start_operation, bool clockwise) {
		int array[3] = {};

		//Eseguo le operazioni
		switch (start_operation) {
		case RotateUp:
			break;
		case RotateLeft:
			break;
		case RotateRight:
			break;
		case RotateDown:
			break;
		case RotateFront:
			break;
		}

	}


	
	void roundFront(Face& face, bool clockwise) {
		/* Rotazione della faccia in senso orario o antiorario */
		/*Materiale utile:
		* https://tinyurl.com/rotazionematrice
		* https://www.youmath.it/lezioni/algebra-lineare/matrici-e-vettori/1568-matrice-trasposta.html
		*/
		/*clockwise signfica "senso orario" 
		il suo valore di default è false quindi 
		il senso di rotazione è antiorario*/

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

		roundUp(); //Guardare funzione roundUp

		/* Copio la matrice trovata */
		matrixCopy(face.values, final_matrix);

	}

}




