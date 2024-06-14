/*
4. Ingresar valores numéricos para las variables A, B, C, D, e informar si su promedio es 
mayor que o igual a 10
*/

#include <stdio.h>
#include <stdlib.h>

#define UMBRAL 10

int main()
{
    float a, b, c, d, promedio;

    printf("Ingrese numero A: ");
    scanf("%f", &a);
    printf("Ingrese numero B: ");
    scanf("%f", &b);
    printf("Ingrese numero C: ");
    scanf("%f", &c);
    printf("Ingrese numero D: ");
    scanf("%f", &d);

    promedio = (a + b + c + d) / 4;

    if (promedio > UMBRAL)
    {
        printf("El promedio es mayor a %d (%.2f)", UMBRAL, promedio);
    }
    else if (promedio < UMBRAL)
    {
        printf("El promedio no es mayor ni igual (es menor) a %d (%.2f)", UMBRAL, promedio);
    }
    else
    {
        printf("El promedio es igual a 10");
    }
    

    return 0;
}