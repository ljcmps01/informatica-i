/*
   6- Una compañía de seguros está abriendo un depto. de finanzas y estableció
   unprograma para captar clientes, que consiste en lo siguiente: Si el monto
   por el que seefectúa la fianza es menor que $500000 la cuota a pagar será por
   el 3% del monto, y siel monto es mayor que $500000 la cuota a pagar será el
   2% del monto. La afianzadoradesea determinar cuál será la cuota que debe
   pagar un cliente.

*/
#include <stdio.h>
#include <stdlib.h>

#define UMBRAL 500000

int main() {
  float fianza;
  int supera_umbral, interes[] = {2, 3};

  printf("\nIngrese el valor de la fianza: $");
  scanf("%f", &fianza);

  supera_umbral = fianza < UMBRAL;

  printf("\nLa cuota a pagar es: $%.2f",
         fianza * (float)interes[supera_umbral] / 100);

  return EXIT_SUCCESS;
}