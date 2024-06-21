/*
9. Realizar un programa que convierta el tiempo de una carrera en tiempo para
correr unkilómetro y en promedio de velocidad en kilómetros por hora. Se deberá
ingresar: la distancia recorrida en kilómetros y el tiempo en minutos y
segundos. Se mostrará por pantalla un texto como el siguiente:"Ha recorrido 10
Km. en 36 min. 23 seg. Su velocidad promedio fue de 16.49 km/h."

 */

#include <stdio.h>
#include <stdlib.h>
int main() {

  int distancia, minutos, segundos;
  float velocidad, tiempo_total;

  do {
    printf("Ingrese distancia recorrida en km: ");
    scanf("%d", &distancia);
  } while (distancia <= 0);

  do {
    printf("Ingrese minutos demorados: ");
    scanf("%d", &minutos);
  } while (minutos < 0);

  do {
    printf("Ingrese segundos demorados: ");
    scanf("%d", &segundos);
  } while (segundos < 0 || !(minutos + segundos));

  tiempo_total = (float)(minutos * 60 + segundos) / 3600;

  velocidad = distancia / tiempo_total;

  printf("La velocidad promedio fue de: %.2f km/h\n", velocidad);
  return EXIT_SUCCESS;
}
