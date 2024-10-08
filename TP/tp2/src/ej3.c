/*3-  Ordenar una matriz de 5 filas por 4 columnas 
de números enteros en orden ascendente por 
la columna 4. 
*/

#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

#define FILAS 5
#define COLUMNAS 4

int main() {
    int matriz[FILAS][COLUMNAS], temp;

    // Llenar la matriz
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el numero en la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    return EXIT_SUCCESS;
}