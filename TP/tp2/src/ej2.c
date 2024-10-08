/* 2-  Leer 20 números enteros (positivos y negativos) distintos de
cero. Mostrar el vector tal como fue ingresado y luego mostrar los
positivos ordenados en forma decreciente y por último mostrar los
negativos ordenados en forma creciente. 
*/

#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

#define NUM 20

int main(){
    int numeros[NUM], positivos[NUM], negativos[NUM];
    int cant_positivos = 0, cant_negativos = 0;

    for(int i = 0; i < NUM; i++){
        do
        {
            printf("Ingrese un numero (%d/%d): ",i,NUM);
            fflush(stdin);
            scanf("%d", &numeros[i]);
        } while (numeros[i]==0);

        if(numeros[i]>0){
            positivos[cant_positivos] = numeros[i];
            cant_positivos++;
        }
        else{
            negativos[cant_negativos] = numeros[i];
            cant_negativos++;
        }
    }
    
    print_arr(numeros,NUM);

    bubble(positivos,cant_positivos,0);
    print_arr(positivos,cant_positivos);

    bubble(negativos,cant_negativos,1);
    print_arr(negativos,cant_negativos);

    return EXIT_SUCCESS;
}