/*3-  Ordenar una matriz de 5 filas por 4 columnas 
de números enteros en orden ascendente por 
la columna 4. 
*/

#include <stdio.h>
#include <stdlib.h>

//Librerias para el llenado automatico de la matriz aleatorio
#include <math.h>
#include <time.h>

#include "utils.h"

#define FILAS 5
#define COLUMNAS 4

int main() {
    int matriz[FILAS][COLUMNAS];
    char test=0;

    printf("Modo test? (S- carga automatica / N- carga manual) ");
    fflush(stdin);
    scanf(" %c",&test);

    if(test=='1'||test=='s'||test=='S'){
        // Llenado automatico
        srand(time(NULL));
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                matriz[i][j]=rand() % 10+1;
            }
        }
    }

    else 
    {
        // Llenado de matriz por usuario
        for (int i = 0; i < FILAS; i++) {
            for (int j = 0; j < COLUMNAS; j++) {
                printf("Ingrese el numero en la posicion [%d][%d]: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
    }

    print_matrix((int *)matriz, COLUMNAS, FILAS);

    printf("Ordenado ascendente: \n");
    col_bubble((int *)matriz, COLUMNAS, FILAS, COLUMNAS,1);

    print_matrix((int *)matriz, COLUMNAS, FILAS);

    return EXIT_SUCCESS;
}