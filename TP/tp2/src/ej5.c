/*
5)  Del registro de partes meteorológico por cada día de un mes se registra en forma 
secuencial la temperatura máxima y temperatura mínima. Finalizada la carga de 
datos se pide informar: 
- El día más frío y cual fue esa temperatura (Se supone único) 
- El día más cálido y cual fue esa temperatura (Se supone único) 
- El promedio de las temperaturas máximas del mes 
- Mostrar las temperaturas de cada día. 
- Mostrar las temperaturas ordenas por temperatura máximas en forma   
descendente.
*/

#include <stdio.h>
#include <stdlib.h>

//Librerias para el llenado automatico de la matriz aleatorio
#include <math.h>
#include <time.h>

#define DIAS 5

int main(void){
    int dias[DIAS],dia_mayor,dia_menor, flag_primer_ingreso=1;
    float maximos_minimos_diarios[31][2],\
        temp_mayor,\
        temp_menor, \
        temp_max_prom=0;

    char* encabezado = "DIA \tMAXIMO\tMINIMO\n";

    for (int i = 0; i < DIAS; i++)
    {
        printf("\nDATOS DIA %d\n",i+1);
        //Ingreso la temp maxima del dia
        printf("\tTemperatura maxima: ");
        scanf("%f",&maximos_minimos_diarios[i][0]);
        temp_max_prom+=maximos_minimos_diarios[i][0]; //Acumulo maximos diarios

        maximos_minimos_diarios[i][1]=maximos_minimos_diarios[i][0]+1;
        // La temperatura minima debe ser menor a la maxima
        
        while (1)
        {
            printf("\tTemperatura minima: ");
            scanf("%f",&maximos_minimos_diarios[i][1]);
            if(maximos_minimos_diarios[i][0] < maximos_minimos_diarios[i][1])
                printf("La temperatura minima debe ser menor o igual a la maxima del dia\n");
            else 
                break;
            
        }
        
        // Cargo los valores iniciales maximos
        if (flag_primer_ingreso)
        {
            dia_mayor = i+1;
            dia_menor = i+1;
            temp_mayor = maximos_minimos_diarios[i][0];
            temp_menor = maximos_minimos_diarios[i][1];
            flag_primer_ingreso = 0;
        }

        //Comparo maximos y minimos
        else if (maximos_minimos_diarios[i][0] > temp_mayor)
        {
            dia_mayor = i+1;
            temp_mayor = maximos_minimos_diarios[i][0];
        }
        
        else if (maximos_minimos_diarios[i][1] < temp_menor)
        {
            dia_menor = i+1;
            temp_menor = maximos_minimos_diarios[i][1];
        }
        
    }

    //Calculo el promedio de los maximos diarios
    temp_max_prom/=DIAS;

    //Muestro los resultados
    printf("\nPromedio de temperaturas maximas: %.2f grados\n",temp_max_prom);
    printf("\nDia con mayor temperatura maxima: %d con %.2f grados\n",dia_mayor,temp_mayor);
    printf("Dia con menor temperatura maxima: %d con %.2f grados\n",dia_menor,temp_menor);
    
    printf("%s",encabezado);

    for (int i = 0; i < DIAS; i++)
    {
        printf("%d\t%.2f\t%.2f\n",i+1,\
                                maximos_minimos_diarios[i][0],\
                                maximos_minimos_diarios[i][1]\
        );
    }
    
}