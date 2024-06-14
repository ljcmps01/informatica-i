/*
2. Diseñar un algoritmo que lea un valor que representa la medida de un radio. Se pide 
que calcule y muestre el perímetro y el área del círculo. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio, perimetro, area;

    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);

    perimetro = 2 * 3.1416 * radio;
    area = 3.1416 * radio * radio;

    printf("El perimetro del circulo es: %.2f\n", perimetro);
    printf("El area del circulo es: %.2f\n", area);

    return 0;
}