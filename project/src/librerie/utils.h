#ifndef UTILS_H
#define UTILS_H

#include "math.h"

#include "utils.h"

/* Arrays product */
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

/* Copia matrix2 in matrix1 */
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

/* Copia array2 in array1 */
template <size_t n>
inline void arrayCopy(int(&array1)[n], int(&array2)[n]) {
	for (int count = 0; count < n; count++) {
		*(array1 + count) = *(array2 + count);
	}
}

/* Matrixes product */
template <size_t n_rows, size_t n_cols>
inline void matrixProduct(int(&matrix1)[n_rows][n_cols], int(&matrix2)[n_rows][n_cols]) {
	int** final_M = new int* [n_rows];
	int* M_data = new int[n_rows * n_cols];
	int* arr1 = new int[n_cols];
	int* arr2 = new int[n_rows];


	for (int i = 0; i < n_rows; ++i)
	{
		final_M[i] = M_data + i * n_cols;
	}

	for (int row = 0; row < n_rows; row++) {
		for (int col = 0; col < n_cols; col++) {
			//matrix2 colonna
			for (int count = 0; count < n_rows; count++) {
				arr1[count] = matrix1[row][count];
				arr2[count] = matrix2[count][row];
			}
			final_M[row][col] = arrayProduct(arr1, arr2, n_cols);
		}
	}
	matrixCopy(matrix1, final_M);
}



#endif