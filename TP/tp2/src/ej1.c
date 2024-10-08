#include <stdlib.h>
#include <stdio.h>

#include "utils.h"

#define NUM 3

int main(){
    int numeros[NUM];

    for(int i = 0; i < NUM; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    print_arr(numeros,NUM);
    return EXIT_SUCCESS;
}