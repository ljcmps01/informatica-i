/*Ejercicio 3:
 *
 * Ingresar una matriz de 5x6 por filas. Luego presntar
 * un menu de opciones:
 * a- Imprimir la matriz en pantalla con su forma
 * b- Imprimir los elementos positivos y un guion para
 * los negativos y una X para los ceros
 * c- Crear y mostrar un vector que contengan los totales por columnas
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define FILAS 5
#define COLUMNAS 10
int main() {
    int matriz[FILAS][COLUMNAS];
    int total_columnas[COLUMNAS] = {0};
    char opcion;

    printf("Ingresar matriz de %dx%d:\n",FILAS,COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);

            total_columnas[j] += matriz[i][j];
        }
        printf("\n");
    }


    do{
        printf("\nMenu de opciones:\n");

        printf("a- Imprimir la matriz\n");
        printf("b- Filtrar valores\n");
        printf("c- Imprimir sumatoria de columnas\n");
        printf("x- Salir\n");


        printf("Elija una opcion: ");
        scanf(" %c", &opcion);
        switch (opcion) {
            case 'a':
                printf("Matriz original:\n");
                for (int i = 0; i < FILAS; i++) {
                    printf("| ");
                    for (int j = 0; j < COLUMNAS; j++) {
                        printf("%d | ", matriz[i][j]);
                    }
                    printf("\n");
                }
                
                break;
            case 'b':
                printf("Matriz modificada:\n");
                for (int i = 0; i < FILAS; i++) {
                    printf("| ");
                    for (int j = 0; j < COLUMNAS; j++) {
                        if (matriz[i][j] > 0) {
                            printf("%d | ", matriz[i][j]);
                        } else if (matriz[i][j] < 0) {
                            printf("- | ");
                        } else {
                            printf("0 | ");
                        }
                    }
                    printf("\n");
                }
                break;
            case 'c':
            printf("Sumatoria de columnas:\n|");

                for (int i = 0; i < COLUMNAS; i++)
                {
                    printf(" %d |", total_columnas[i]);
                }
                
                break;
            case 'x':
                break;
            default:
                printf("Opcion invalida\n");
        }
    }while(opcion!='x');
}