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
 * @brief Imprime el array hasta el elemento len y agrega una cantidad
 * de tabulaciones determinadas entre elementos
 * 
 * @param arr puntero al array a imprimir
 * @param len cantidad de elementos a mostrar
 * @param indent nuevo de tabulaciones a agregar entre elementos
 * @param newline Indica si hay que agregar una nueva linea tras imprimir la fila
 */
void print_arr_spanned(int *arr, int len, int indent, int newline);

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
 * @brief Calcula y retorna el promedio de un array desde el elemento from
 * al elemento to
 * 
 * @param arr puntero al elemento
 * @param from indice del elemento de inicio
 * @param to indice al elemento de final de calculo
 * @return float 
 */
float promediar_fila(int *arr, int from, int to);

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