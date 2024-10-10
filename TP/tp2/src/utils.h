#ifndef UTILS_H
#define UTILS_H

/**
 * @brief Imprime el array pasado como argumento hasta el elemento len
 * 
 * @param arr array a imprimir
 * @param len cantidad de elementos a mostrar
 */
void print_arr(int *arr, int len);

/**
 * @brief Imprime el contenido de la matriz
 * 
 * @param width 
 * @param height 
 * @param matrix 
 */
void print_matrix(int *matrix,int width, int height);

/**
 * @brief copia el array origen al destino
 * 
 * @param origen 
 * @param destino 
 * @param len 
 */
void copiar_array(int *origen, int *destino, int len);

/**
 * @brief bubble sort con parametro decreciente/creciente
 * 
 * @param arr 
 * @param len 
 * @param creciente 
 *      si es 1 ordena de forma creciente
 *      si es 0 ordena de forma decreciente
 */
void bubble(int *arr, int len, int creciente);


/**
 * @brief ordenamiento tipo burbuja para matrices segun columna
 * 
 * @param matrix matriz a ordenar
 * @param filas alto de matriz
 * @param columnas ancho de matriz
 * @param columna_orden columna para tomar de indice
 * @param creciente 
 *      si es 1 ordena de forma creciente
 *      si es 0 ordena de forma decreciente
 */
void col_bubble(int *matrix, int columnas, int filas, int columna_orden, int creciente);

#endif