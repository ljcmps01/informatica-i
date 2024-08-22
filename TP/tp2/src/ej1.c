/*Ejercicio 1:
 *
 * Ingresar una matriz de 4x4 por columna
 * se pide:
 * a- suma de las columnas con indice impares
 * b- suma de las filas de indice pares
 * c- promedio de las columnas pares
 * d- dada una fila y una columna modificar ese valor
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define FILAS 4
#define COLUMNAS 4

int main() {
    int matriz[FILAS][COLUMNAS],\
        indices[2],\
        indice_aux,
        suma_impares = 0,\
        suma_pares = 0,\
        contador_col_pares = 0;

    float promedio_pares = 0;

    // Ingresar la matriz
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Ingrese el valor en la fila %d columna %d: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    // // TEST
    // for (int i = 0; i < FILAS; i++) {
    //     for (int j = 0; j < COLUMNAS; j++) {
    //         matriz[i][j]=i+j;
    //     }
    // }

    // Imprimo matriz
    for (int i = 0; i < FILAS; i++) {
        printf("| ");
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcular a)
    for (int j = 0; j < COLUMNAS; j ++) {
        for (int i = 0; i < FILAS; i++) {
            // a) si es columna impar
            if(!(j%2))
                suma_impares += matriz[j][i];
            // b) si es columna par
            else{
                promedio_pares += matriz[j][i];
                contador_col_pares++;
            }
        }
    }

    // Calcular b)
    for (int i = 1; i < FILAS; i+=2)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            suma_pares += matriz[i][j];
        }
    }

    //Calculo promedio punto c) 
    promedio_pares /= contador_col_pares;   

    printf("a) Sumatoria de columnas impares: %d\n",suma_impares);
    printf("b) Sumatoria de filas pares: %d\n",suma_pares);
    printf("c) promedio de columnas pares: %.2f\n\n",promedio_pares);

    do
    {
        printf("Ingrese el indice de la columna a modificar (1-%d)", COLUMNAS);
        scanf(" %d", &indice_aux);
        indice_aux--;
    } while (indice_aux>=COLUMNAS || indice_aux<0);
    indices[0]=indice_aux;

    do
    {
        printf("Ingrese el indice de la fila a modificar  (1-%d)", FILAS);
        scanf(" %d", &indice_aux);
        indice_aux--;
    } while (indice_aux>=FILAS || indice_aux<0);
    indices[1]=indice_aux;

    printf("Ingrese valor a insertar ");
    scanf("%d", &matriz[indices[0]][indices[1]]);

    // Imprimo matriz modificada
    printf("\nMatriz modificada:\n");
    for (int i = 0; i < FILAS; i++) {
        printf("| ");
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d | ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;

}