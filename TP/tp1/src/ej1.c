/*Ejercicio 1:
 *
 * Ingresar 2 numeros NUMERO1 y NUMERO2 e imprimir:
 *
 * - Producto de ambos numeros
 * - Cuadrado de NUMERO1
 * - La decima parte de NUMERO2
 *
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {

  float numero1, numero2;
  printf("\ningrese el primer numero: ");
  scanf("%f", &numero1);

  printf("\ningrese el segundo numero: ");
  scanf("%f", &numero2);

  printf("\nEl producto de ambos numeros es: %.2f", numero1 * numero2);

  printf("\nEl cuadrado de %.2f es: %.2f", numero1, numero1 * numero1);

  printf("\nLa decima parte de %.2f es: %.2f\n", numero2, numero2 / 10);

  return EXIT_SUCCESS;
}
