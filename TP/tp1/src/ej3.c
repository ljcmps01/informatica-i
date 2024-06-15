/*
3. De un alumno del curso de ingreso a la UTN se ingresan las notas obtenidas en
los exámenes de las 3 materias que lo forman. Calcular el promedio del alumno y
mostrarlo por pantalla
*/

#include <stdio.h>
#include <stdlib.h>

#define N_NOTAS 3

int main() {
  int nota, sumatoria = 0, i = 0;
  float promedio;

  do {
    printf("\nIngrese la nota %d: ", i + 1);
    scanf("%d", &nota);
    if (nota > 0) {
      sumatoria += nota;
      i++;
    } else
      printf("\nIngrese una nota valida");
  } while (i < N_NOTAS);

  promedio = (float)sumatoria / 3;

  printf("\nEl promedio es: %.2f\n", promedio);

  return 0;
}