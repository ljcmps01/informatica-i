#include "utils.h"

#include <stdlib.h>
#include <stdio.h>

void print_arr(int *arr, int len){
    for(int i = 0; i < len; i++){
        printf("%d \t", *(arr+i));
    }
    printf("\n");
}


void print_matrix(int *matrix,int width, int height){
    for (int i = 0; i < height; i++) {
        print_arr((matrix+i*width),width);        
        // printf("\n");
    }
}

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

void copiar_array(int *origen, int *destino, int len){
    for(int i = 0; i < len; i++){
        destino[i] = origen[i];
    }
}

void col_bubble(int *matrix, int columnas, int filas, int columna_orden, int creciente){
    int aux[columnas];
    int fila_actual, fila_proxima;
    columna_orden--;

    for(int i = 0; i < filas - 1; i++){
        for(int j = 0; j < filas - i - 1; j++)
        {
            fila_actual = *(matrix+j*columnas+columna_orden);
            fila_proxima = *(matrix+(j+1)*columnas+columna_orden);
            
            if(\
                (creciente == 1 &&  \
                    fila_actual > fila_proxima)\
                || \
                (creciente == 0 &&  \
                    fila_actual < fila_proxima)\
            )
            {
                copiar_array((int*)(matrix+j*columnas), aux, columnas);
                copiar_array((int*)(matrix+(j+1)*columnas), (int*)(matrix+j*columnas), columnas);
                copiar_array(aux, (int*)(matrix+(j+1)*columnas), columnas);
            }
        }
    }
}