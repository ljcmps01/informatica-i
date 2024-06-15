/*
5. Se registran de los empleados de una empresa Número de legajo, sueldo y sexo (1 
femenino y 2 masculino). Diseñar un algoritmo que permita informar cuantas mujeres 
ganan más de $ 500000 y cuantos hombres ganan menos de $ 400000
*/

#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Chequea que si un valor esta por debajo de un umbral "min"
 *
 * @param min umbral minimo a comparar
 * @param valor variable a analizar
 * @return 1 si esta por debajo y 0 si esta por encima
 */
int checkMin(int min, float valor);

/**
 * @brief Chequea si un valor esta por encima del umbral "max"
 * 
 * @param max umbral a comparar
 * @param valor variable a analizar
 * @return 1 si supera el umbral, 0 si esta por debajo
 */
int checkMax(int max, float valor);

/**
 * @brief Verifica que un valor dado se encuentre dentro de cierto
 * rango [min;max]
 * 
 * @param min umbral minimo
 * @param max umbral maximo
 * @param valor variable a comparar
 * @return  1 si esta por fuera del rango
 *          0 si esta dentro del rango
 */
int checkMinMax(int min, int max, float valor);

int main() {
  int legajo, sexo;
  char continuar = '0';
  float sueldo;

  int contadorMujeres = 0;
  int contadorHombres = 0;

  do {
    // Se pide un numero de legajo valido
    do {
      printf("Ingrese legajo del empleado: ");
      scanf("%d", &legajo);
    } while (checkMin(0, legajo));

    // Se pide un sueldo valido
    do {
      printf("Ingrese el sueldo del empleado: ");
      scanf("%f", &sueldo);
    } while (checkMin(0, sueldo));

    do {
      printf("Ingrese el sexo del empleado(1-Femenino | 2-Masculino): ");
      scanf("%d", &sexo);
    } while (checkMinMax(0, 3, sexo));

    switch (sexo) {
    case 1:
      if (sueldo > 500000)
        contadorMujeres++;
      break;

    case 2:
      if (sueldo < 40000)
        contadorHombres++;
      break;
    }

    printf("Ingrese cualquier tecla para continuar o 0 para parar: ");
    fflush(stdin);
    scanf(" %c", &continuar);

  } while (continuar != '0');

  printf("Cantidad de mujeres que ganan mas de $500000: %d\n", contadorMujeres);
  printf("Cantidad de hombres que ganan menos de $40000: %d\n",
         contadorHombres);

  return EXIT_SUCCESS;
}

int checkMin(int min, float valor) { return valor <= min; }

int checkMax(int max, float valor) { return valor >= max; }

int checkMinMax(int min, int max, float valor) {
  return checkMin(min, valor) || checkMax(max, valor);
}