#include "operations.h"
#include "../grafica/graphics.h"

namespace opr {


	
	void roundFace(Face& face, bool clockwise) {
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
		///////////////////////////////////////////
		/* spostamento array laterali */ 
		
		int app[3];
		if (clockwise == true)
		 
		{
			for (int i = 0; i < 3; i++) {
				app[i] = face.lim_right[i];
				face.lim_right[i] = face.lim_up[i];
				face.lim_up[i] = face.lim_left[i];
				face.lim_left[i] = face.lim_down[i];
				face.lim_down[i] = app[i];

			}
		}
		else
		{
			
			for (int i = 0; i < 3; i++) {
				app[i] = face.lim_right[i];
				face.lim_right[i] = face.lim_down[i];
				face.lim_down[i] = face.lim_left[i];
				face.lim_left[i] = face.lim_up[i];
				face.lim_up[i] = app[i];
			}
		}
		//for caricamento right left

		for (int i = 0; i < 3; i++)
		{

			//PROBLEMA QUI mettere i limiti
			face.left[i][2] = face.lim_left[i];
			face.right.values[i][0] = face.lim_right[i];
		}

		//for caricamento up down
		for (int i = 0; i < 3; i++)
		{
			face.up[2][i] = face.lim_up[i];
			face.down[0][i] = face.lim_down[i];
		}

		/* Sposto i valori delle faccie collegate */
		if (face.position == Up){
		
		}
		/* Copio la matrice trovata */
		matrixCopy(face.values, final_matrix);


	}

}




