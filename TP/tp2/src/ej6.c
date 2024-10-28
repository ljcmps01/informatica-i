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

int stock[SUCURSALES][ARTICULOS];
int opcion=0;

void imprimirMenu(void);
void cargarStock(void);
void cargarStockRecursiva();

int main(void){
    while (opcion!=4){
        imprimirMenu();
        switch(opcion){
            case 1:
                printf("===CARGA DE INVENTARIO===");
                cargarStock();
                break;
            default:
                printf("Opción inválida\n");
                break;
        }
    }
    return EXIT_SUCCESS;
}

void imprimirMenu(void){
    printf("\n1. Carga de datos\n");
    printf("2. Venta de artículos\n");
    printf("3. Existencia de mercaderías\n");
    printf("4. Salir del programa\n");
    printf("Ingrese una opción: ");
    scanf("%d",&opcion);
}

void cargarStock(void){
    int deposito, articulo, cantidad, exito=1;
    while(exito)
    {
        printf("\nIngrese el número de deposito: (1/%d o 0 para cancelar)\n", SUCURSALES);
        scanf("%d",&deposito);

        if (deposito==0){
            exito = 0;
            break;
        } 
        else if(deposito<=0 || deposito>SUCURSALES)
            printf("Número de deposito invalido\n");
        else 
            break;
    }

    while(exito){
        printf("\nIngrese el número de articulo: (1/%d  o 0 para cancelar)\n", ARTICULOS);
        scanf("%d",&articulo);
        
        if (articulo==0){
            exito = 0;
            break;
        } 
        else if(articulo<=0 || articulo>ARTICULOS)
            printf("Número de articulo invalido\n");
        else 
            break;
    }

    while(exito){
        printf("\nIngrese el stock a sumar:  o 0 para cancelar \n");
        scanf("%d",&cantidad);
        
        if (cantidad==0){
            exito = 0;
            break;
        } 
        else if(cantidad<=0)
            printf("Número de cantidad invalido\n");
        else 
            break;
    }

    if (exito)
    {
        stock[deposito-1][articulo-1]+=cantidad;

        printf("Se cargo exitosamente %d existencias del articulo %d en el deposito %d\n", \
                cantidad, \
                articulo, \
                deposito);
        cargarStockRecursiva();
    }
    else
    {
        printf("OPERACION CANCELADA");
    }
    
}

void cargarStockRecursiva(){
    char respuesta='s';
    printf("Desea agregar stock de otro articulo?\n");
    fflush(stdin);
    scanf(" %c",&respuesta);
    if(respuesta=='s' || respuesta== 'S')
        cargarStock();

}
