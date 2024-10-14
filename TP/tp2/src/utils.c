#include "utils.h"

#include <stdlib.h>
#include <stdio.h>

void print_arr(int *arr, int len){
    print_arr_spanned(arr, len, 1,1);
}

void print_arr_spanned(int *arr, int len, int indent, int newline){
    for(int i = 0; i < len; i++){
        printf("%d", *(arr+i));
        for (int j = 0; j < indent; j++)
        {
            printf(" \t");
        }
    }
    if (newline)
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

float promediar_fila(int *arr, int from, int to){
    float promedio = 0;
    int cantidad = to-from;

    if (cantidad>0)
    {
        for (int i = from; i < to; i++)
        {
            promedio += arr[i];
        }
        promedio /= cantidad;
    }
    
    return promedio;
}

void copiar_array(int *origen, int *destino, int len){
    for(int i = 0; i < len; i++){
        destino[i] = origen[i];
    }
}

void col_bubble(int *matrix, int columnas, int filas, int columna_orden, int creciente){
    int aux[columnas];  //vector temporal para realizar el swap de filas
    int fila_actual, fila_proxima; //variables para facilitar la lectura de la logica
    columna_orden--; //Bajo en 1 el valor de la columna de orden para que coincida con el indice real

    for(int i = 0; i < filas - 1; i++){ 
        for(int j = 0; j < filas - i - 1; j++)
        {
            //Obtengo el valor de la columna orden en la fila actual y la fila siguiente para compararlos.
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