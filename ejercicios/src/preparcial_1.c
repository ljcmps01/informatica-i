#include <stdio.h>
#include <stdlib.h>

#define UMBRAL_SUELDO 1000

int main(){
  char continuar;

  //(1:1000)
  int legajo,\
  mayores_175=0,igual_175=0,menores_175=0,\
  cantidad_promedio=0;


  //>0
  float sueldo,total_sueldo=0,altura,flag_altura,promedio_altura=0;



  do {
    do{
      printf("legajo del empleado: ");
      scanf("%d",&legajo);
    }while(!(legajo>1 && legajo<1000));

    do{
      printf("sueldo del empleado: ");
      scanf("%f",&sueldo);
    }while(sueldo<=0);
    
    do{
    printf("altura del empleado: ");
    scanf("%f",&altura);
    }while(altura<=0);

    total_sueldo+=sueldo;

    if (sueldo > UMBRAL_SUELDO){
      promedio_altura+=altura;
      cantidad_promedio++;
    } 

    flag_altura=altura-1.75;

    //Mas alto que 1,75
    if(flag_altura>1)
      mayores_175++;
    
    else if(flag_altura==0)
      igual_175++;

    else
     menores_175++;

    printf("Ingrese 1 si desea seguir ingresando datos ");
    scanf(" %c",&continuar);
  }while (continuar == '1');
  
  printf("A- Hay %d empleados que miden <= 175 y %d empleados >175\n",menores_175+igual_175,mayores_175);

  promedio_altura = promedio_altura/cantidad_promedio;
  printf("B- El promedio de altura con sueldos>1000 es de %.2f\n",promedio_altura);
 
  if (mayores_175>menores_175)
    printf("C- Hay mas altos que petisos\n");
  
  if (mayores_175<menores_175)
    printf("C- Hay mas petisos que altos\n");

  if (mayores_175==menores_175)
    printf("C- Hay igual cantidad de altos que de petisos\n");

  printf("D- total sueldos: %.2f\n",total_sueldo);

  return EXIT_SUCCESS;
}
