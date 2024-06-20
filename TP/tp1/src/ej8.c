/*
8. Un Municipio desea determinar cuántas personas de cada una de las secciones
quecomponen su zona asisten el día de las votaciones. Las secciones son: norte,
sur ycentro. También desea determinar cuál es la sección con mayor número de
votantes.

 */
#include <stdio.h>
#include <stdlib.h>
int main() {
  int mayor = 0, votantes[3];
  char zonas[3][6] = {"NORTE", "SUR", "CENTRO"};

  for (int i = 0; i < 3; i++) {
    printf("Ingrese votantes de %s: ", zonas[i]);
    scanf("%d", &votantes[i]);
    if (votantes[i] > votantes[mayor]) {
      mayor = i;
    }
  }

  printf("La zona con mas votantes es %s con %d votantes\n", zonas[mayor],
         votantes[mayor]);

  return EXIT_SUCCESS;
}
