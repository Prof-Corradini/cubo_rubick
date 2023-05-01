#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include "math.h"

/* Moltiplicazione di due tuple */
/* -------------------------------------------- */
template <size_t n>
inline int arrayProduct(int(&array1)[n], int(&array2)[n]) {
	int result = 0;
	for (int count = 0; count < n; count++) {
		result += *(array1 + count) * *(array2 + count);
	}
}

inline int arrayProduct(int* array1, int* array2, int dim) {
	int result = 0;
	for (int count = 0; count < dim; count++) {
		result += *(array1 + count) * *(array2 + count);
	}
	return result;
}
/* -------------------------------------------- */


/* Copia di array2 in array1 */
/* -------------------------------------------- */
template <size_t n>
inline void arrayCopy(int(&array1)[n], int(&array2)[n]) {
	for (int count = 0; count < n; count++) {
		*(array1 + count) = *(array2 + count);
	}
}
/* -------------------------------------------- */




/* Copia di matrix2 in matrix1 */
/* -------------------------------------------- */
template <size_t n_rows, size_t n_cols>
inline void matrixCopy(int(&matrix1)[n_rows][n_cols], int(&matrix2)[n_rows][n_cols]) {
	for (int row = 0; row < n_rows; ++row) {
		for (int col = 0; col < n_cols; ++col) {
			matrix1[row][col] = matrix2[row][col];
		}
	}
}

template <size_t n_rows, size_t n_cols>
inline void matrixCopy(int(&matrix1)[n_rows][n_cols], int** matrix2) {
	for (int row = 0; row < n_rows; ++row) {
		for (int col = 0; col < n_cols; ++col) {
			matrix1[row][col] = matrix2[row][col];
		}
	}
}
/* -------------------------------------------- */


/* Prodotto fra matrici
*	https://www.youmath.it/lezioni/algebra-lineare/matrici-e-vettori/1567-prodotto-riga-per-colonna.html
*/

template <size_t n_rows, size_t n_cols>
inline void matrixProduct(int(&matrix1)[n_rows][n_cols], int(&matrix2)[n_rows][n_cols]) {

	/* Inizializzo una nuova matrice */
	int** result_matrix = new int* [n_rows];
	int* result_data = new int[n_rows * n_cols];

	/* Compongo le righe e colonne della matrice finale */
	for (int i = 0; i < n_rows; ++i) {
		result_matrix[i] = result_data + i * n_cols;
	}

	/* Eseguo la moltiplicazione fra le due matrici */
	for (int i = 0; i < n_rows; i++) {
		for (int j = 0; j < n_cols; j++) {
			result_matrix[i][j] = 0;
			for (int k = 0; k < n_cols; k++) {
				result_matrix[i][j] += matrix1[i][k] * matrix2[k][j];
			}
		}
	}

	matrixCopy(matrix1, result_matrix);

	delete[] result_data;
	delete[] result_matrix;
}



#endif