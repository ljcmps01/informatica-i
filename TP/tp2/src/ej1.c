#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

#define NUM 20

int main(){
    int numeros[NUM];
    int flag_primer_entrada = 1;
    int max,index_max;

    for(int i = 0; i < NUM; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
        if(flag_primer_entrada){
            max = numeros[i];
            index_max = i;
            flag_primer_entrada = 0;
        }
        else if(numeros[i] > max){
            max = numeros[i];
            index_max = i;
        }

    }
    printf("El maximo ingresado es %d con indice %d,\n",max,index_max);
    print_arr(numeros,NUM);
    return EXIT_SUCCESS;
}