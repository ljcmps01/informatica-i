/*
 4- De los 100 alumnos de una escuela se ingresa:
      Nota del 1er trimestre
      Nota del 2er trimestre
      Nota del 3er trimestre
    El orden de ingreso coincide con su numero de  legajo que es de 1 a 100
    Luego del registro el programa debe preguntar al usuario si desea corregir alguna nota, para lo cual se debe ingresar:
      N de legajo
      Trimestre a corregir (1,2 o 3)
      Nueva nota

    El programa debe mostrar la nota anterior correspondiente al trimestre indicado y preguntar si confirma la modificacion. Si contesta "SI" se registra la nueva nota, caso contrario pregunta si desea continuar. Cuando no se registren mas modificaciones se debera listar:
      N de legajo   1er Trimestre   2do Trimestre   3er Trimestre   Promedio
      XX            XX              XX              XX              XX.xx
*/

#include <stdio.h>
#include <stdlib.h>

//Librerias para el llenado automatico de la matriz aleatorio
#include <math.h>
#include <time.h>

#include "utils.h"

#define FILAS 10
#define COLUMNAS 4

int main() {
    int matriz[FILAS][COLUMNAS];
    
    // Llenado automatico
    srand(time(NULL));
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
              //Si es la primer columna guardo el legajo
            if (j==0)
                matriz[i][j]=i+1;
                  
            else
                matriz[i][j]=rand() % 10+1;
        }
    }

    // // Llenado de matriz por usuario
    // for (int i = 0; i < FILAS; i++) {
    //     for (int j = 0; j < COLUMNAS; j++) {
    //         printf("Ingrese el numero en la posicion [%d][%d]: ", i, j);
    //         scanf("%d", &matriz[i][j]);
    //     }
    // }
    
    printf("N DE LEGAJO\t1ER TRIMESTRE\t2DO TRIMESTRE\t3ER TRIMESTRE\tPROMEDIO\n");
  
    print_matrix((int *)matriz, COLUMNAS, FILAS);

    //printf("Ordenado ascendente: \n");
    //col_bubble((int *)matriz, COLUMNAS, FILAS, COLUMNAS,1);

    //print_matrix((int *)matriz, COLUMNAS, FILAS);

    return EXIT_SUCCESS;
}
