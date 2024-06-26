/*
10. Tomando como base los resultados obtenidos en un laboratorio de análisis
clínicos,un médico determina si una persona tiene anemia o no, lo cual depende
de su nivel dehemoglobina en la sangre, de su edad y de su sexo. Si el nivel de
hemoglobina que tiene una persona es menor que el rango que le corresponde, se
determina su resultadocomo positivo y en caso contrario como negativo. La tabla
en la que el medico se basa para obtener el resultado es la siguiente:

| EDAD              |NIVEL HEMOGLOBINA  |
| ------------------|------------------:|
| 0 - 1 mes         |13 - 26 g%         |
| > 1 y < = 6 meses | 10 - 18 g%        |
| > 6 y < = 12 meses|  11 - 15 g%       |
| > 1 y < = 5 años  |  11.5 - 15 g%     |
| > 5 y < = 10 años |  12.6 - 15.5 g%   |
| > 10 y < = 15 años|  13 - 15.5 g%     |
| mujeres > 15 años |  12 - 16 g%       |
| hombres > 15 años | 14 - 18 g%        |

 */
#include <stdio.h>
#include <stdlib.h>

#define N_DATOS 6
#define N_RANGOS 8

int main() {
  // edad,mayor 1 año, genero(0-mujer|1-hombre), hemoglobina
  int datos[N_DATOS][4]={
    {5,0,1,15},
    {1,1,1,11},
    {2,0,0,12},
    {20,1,0,9},
    {5,1,2,5},
    {16,1,1,16}
  },edad_meses,nivel_hemoglobina,tiene_anemia;

  float rangos[N_RANGOS][2]={
    {0,13},
    {1,10},
    {6,11},
    {1*12,11.5},
    {5*12,12.6},
    {10*12,13},
    {15*12,12},
    {15*12,14}
  };

  char rango_edad[2][8]={"anio/s","mes/es"};
  char genero[2][8]={"hombre","mujer"};

  printf("EDAD\t\t|GENERO\t|HEMOGLOBINA\n");

  for (int i=0; i<N_DATOS; i++) {
    printf("%d %s \t|%s\t|%d \% \n",datos[i][0],\
           rango_edad[datos[i][1]],\
           genero[datos[i][2]],\
           datos[i][3]\
           );
  }

  for (int i=0; i<N_DATOS; i++){
    //Primero guardo la edad en una variable
    edad_meses = datos[i][0];
    
    tiene_anemia = 0;

    nivel_hemoglobina = datos[i][3];

    //Si esta expresada en años, la convierto a meses
    if (datos[i][1])
      edad_meses = edad_meses*12;

    //Comienzo a buscar el rango etario correspondiente
    //De atras para adelante 
    for (int j = N_RANGOS-2; j>=0; j--) {
      
      //Si la edad es mayor a 15 años  
      if(edad_meses>15*12){
        tiene_anemia = nivel_hemoglobina < rangos[j+(datos[i][2])][1];
        break;
      }
        
      else if(edad_meses > rangos[j][0]){
        tiene_anemia = nivel_hemoglobina < rangos[j][1];
        break;
      }
    }

    printf("Paciente n°%d\tedad: %d\t tiene anemia: %d\n",i,edad_meses,tiene_anemia);
  }
  
  return EXIT_SUCCESS;
}
