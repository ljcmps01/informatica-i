/*
6)  Una empresa comercializa 10 artículos en 3 sucursales. Se debe realizar un 
programa que presente un menú con las siguientes opciones: 
* Carga de datos: se registrará la existencia en depósito informando N° de 
sucursal, N° de artículo y cantidad 
* Venta de artículos: se registran las ventas realizadas informando N° de 
sucursal, N° de artículo y cantidad vendida. Se debe verificar que la cantidad 
vendida no supere la existencia, informando si la venta no se puede realizar 
por este motivo 
* Existencia de mercaderías: listar por pantalla saldos existentes de 
mercaderías 
* Salir del programa 
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ARTICULOS 10
#define SUCURSALES 3

#define SUMAR 1
#define RESTAR 0

int stock[SUCURSALES][ARTICULOS];
int opcion=0;

int pedirUmbral(int minimo,int maximo);
void inicializacionStock();
void imprimirMenu(void);
int modificarStock(int suma);
void modificarStockRecursiva(int suma);
void mostrarStock(void);

int main(void){
    while (opcion!=4){
        imprimirMenu();
        switch(opcion){
            case 1:
                printf("===CARGA DE INVENTARIO===");
                modificarStock(SUMAR)?:printf("OPERACION CANCELADA\n");
                break;
            case 2:
                printf("===VENTA DE ARTICULOS===");
                modificarStock(RESTAR)?:printf("OPERACION CANCELADA\n");
                break;
            case 3:
                mostrarStock();
                break;
            case 4:
                printf("===FIN DE PROGRAMA===");
                break;
            default:
                printf("Opción inválida\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}

int pedirUmbral(int minimo,int maximo){
    int numero;
    while(1){
        scanf("%d",&numero);
        if(numero>=minimo && numero<=maximo)
            break;
        else
            printf("Número fuera de rango\n");
    }
    return numero;
}

void mostrarStock(){
    
    printf("\n======EXISTENCIA DE MERCADERÍAS======\n");
    printf("ARTICULO\tSUCURSAL\tSTOCK\n");
    for (int articulo = 0; articulo < ARTICULOS; articulo++){
        for(int sucursal=0; sucursal<SUCURSALES; sucursal++){
            printf("%d\t\t%d\t\t%d\n", articulo+1, sucursal+1, stock[sucursal][articulo]);
        }
        
    }
}

void imprimirMenu(void){
    printf("\n1. Carga de datos\n");
    printf("2. Venta de artículos\n");
    printf("3. Existencia de mercaderías\n");
    printf("4. Salir del programa\n");
    printf("Ingrese una opción: ");
    scanf("%d",&opcion);
}

int modificarStock(int suma){
    int deposito, articulo, cantidad, exito=0;

    printf("\nIngrese el número de deposito: (1/%d o 0 para cancelar)\n", SUCURSALES);
    deposito=pedirUmbral(0,SUCURSALES);
    if (deposito==0)
        return exito;

    printf("\nIngrese el número de articulo: (1/%d  o 0 para cancelar)\n", ARTICULOS);
    articulo=pedirUmbral(0,ARTICULOS);
    if (articulo==0)
        return exito;

    printf("\nStock actual: %d\n",stock[deposito-1][articulo-1]);
    if (suma)
    {
        printf("Ingrese el stock a sumar:  o 0 para cancelar \n");
        cantidad=pedirUmbral(0,0xFFFF);
        stock[deposito-1][articulo-1]+=cantidad;
        if (cantidad==0)
            return exito;
    }
    else
    {
        printf("Ingrese el stock a  restar: o 0 para cancelar \n");
        cantidad=pedirUmbral(0,stock[deposito-1][articulo-1]);
        stock[deposito-1][articulo-1]-=cantidad;
        if (cantidad==0)
            return exito;
    }
    
    exito = 1;
    printf("Se modifico exitosamente %d existencias del articulo %d en el deposito %d\n", \
            cantidad, \
            articulo, \
            deposito);
    printf("\nStock actualizado: %d\n",stock[deposito-1][articulo-1]);
    modificarStockRecursiva(suma);

    return exito;
}

void modificarStockRecursiva(int suma){
    char respuesta='s';
    printf("Desea agregar stock de otro articulo?\n");
    fflush(stdin);
    scanf(" %c",&respuesta);
    if(respuesta=='s' || respuesta== 'S' || respuesta== '1')
        modificarStock(suma);

}

void inicializacionStock(){	
    for(int i=0; i<SUCURSALES; i++)
        for(int j=0; j<ARTICULOS; j++)
            stock[i][j] = 0;
}