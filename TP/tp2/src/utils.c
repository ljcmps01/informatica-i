#include "utils.h"

#include <stdlib.h>
#include <stdio.h>

/**
 * @brief Imprime el array pasado como argumento hasta el elemento len
 * 
 * @param arr array a imprimir
 * @param len cantidad de elementos a mostrar
 */
void print_arr(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/**
 * @brief bubble sort con parametro decreciente/creciente
 * 
 * @param arr 
 * @param len 
 * @param creciente 
 *      si es 1 ordena de forma creciente
 *      si es 0 ordena de forma decreciente
 */
void bubble(int *arr, int len, int creciente){
    int temp;
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if((creciente == 1 && arr[j] > arr[j+1]) || (creciente == 0 && arr[j] < arr[j+1])){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}