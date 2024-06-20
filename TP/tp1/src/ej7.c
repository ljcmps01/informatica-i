/*
7. Un entrenador le ha propuesto a un atleta recorrer la misma ruta de cinco
kilómetrospor 3 días, para determinar si es apto para la prueba de 5 Kilómetros
o debe buscar otraespecialidad. Para considerarlo apto debe cumplir por lo menos
una de las siguientescondiciones: - Que en ninguna de las pruebas haga un tiempo
mayor a 25 minutos.- Que al menos en una de las pruebas realice un tiempo mayor
a 20 minutos- Que su promedio de tiempos sea menor o igual a 18 minutos.

 */
#include <stdio.h>
#include <stdlib.h>

#define DIAS 3

int main() {
  int tiempo, participa = 0;
  float promedio = 0;

  for (int i = 0; i < DIAS; i++) {
    printf("Ingrese tiempo del dia %d en minutos: ", i);
    scanf("%d", &tiempo);
    if (tiempo > 20) {
      participa = 1;
      break;
    }
    promedio += tiempo;
  }

  if (participa || promedio / 3 <= 18) {
    printf("Es apto para atletismo");
  } else {
    printf("No es apto para atletismo");
  }

  return EXIT_SUCCESS;
}
