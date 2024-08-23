/*Ejercicio 2:
 *
 * Realizar un programa que:
 * a- Ingresar una matriz de numeros enteros de 10 x 5 positivos
 * b- Cambiar una fila por otra
 * c- Presentar la matriz con su forma
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define FILAS 10
#define COLUMNAS 5

int main() {

    // Inicializar la matriz con valores aleatorios
    int matriz[FILAS][COLUMNAS];
    int fila1, fila2,aux_fila;

    // Ingresar la matriz
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el valor en la fila %d columna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // // TESTEO
    // for (int i = 0; i < 10; i++) {
    //     for (int j = 0; j < 5; j++) {
    //         matriz[i][j] = i+j;
    //     }
    // }

    // Mostrar la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < 10; i++) {
        printf("| ");
        for (int j = 0; j < 5; j++) {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    // Cambiar una fila por otra
    do
    {
        printf("Ingrese la fila a cambiar (0-%d): ",FILAS-1);
        scanf("%d", &aux_fila);
    } while (aux_fila >= FILAS || aux_fila<0);
    fila1=aux_fila;

    do
    {
        printf("Ingrese la fila por la que cambiarla (0-%d): ",FILAS-1);
        scanf("%d", &aux_fila);
    } while (aux_fila >= FILAS || aux_fila<0);
    fila2=aux_fila;
    
    // Cambiando filas
    for (int j = 0; j < COLUMNAS; j++) {
        aux_fila = matriz[fila1][j];
        matriz[fila1][j] = matriz[fila2][j];
        matriz[fila2][j] = aux_fila;
    }

    // Mostrar la matriz modificada
    printf("Matriz modificada:\n");
    for (int i = 0; i < 10; i++) {
        printf("| ");
        for (int j = 0; j < 5; j++) {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

}