/*
2. Diseñar un algoritmo que lea un valor que representa la medida de un radio. Se pide 
que calcule y muestre el perímetro y el área del círculo. 
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radio, perimetro, area;

    do
    {
        printf("Ingrese el radio del circulo: ");
        scanf("%f", &radio);
        if (radio <= 0)
            printf("El radio debe ser mayor a 0\n");
        else
            break;
        
    } while (1);
    

    perimetro = 2 * 3.1416 * radio;
    area = 3.1416 * radio * radio;

    printf("El perimetro del circulo es: %.2f\n", perimetro);
    printf("El area del circulo es: %.2f\n", area);

    return 0;
}