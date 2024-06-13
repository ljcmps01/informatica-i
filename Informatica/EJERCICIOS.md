## Vectores
- Ingresar 10 enteros, guardar unicamente los valores mayores a 100 y mostrar su contenido
```
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD 5
#define UMBRAL 100
int main(int argc, char *argv[])
{

  float v[CANTIDAD],buffer;
  int i,vi=0;
  

  for (i=0; i<CANTIDAD; i++) {

    printf("v[%d] = ",i);
    scanf("%f",&buffer);
    if (buffer > UMBRAL){
	    v[vi] = buffer;
	    vi++;
    }

  }

  for (i=0; i<vi; i++) {
	printf("v[%d]= %f\n",i,v[i]);
  }
  
  return EXIT_SUCCESS;
}
```

- Ingresar caracteres informar cuantos {a:e} fueron ingresados
```
main(){
	int i,v[5];
	char letra;
	for(i=0;i<5;i++)
		v[i]=0;
		
	printf("\n ingrese letras (sale con 0));
	
	do
	{
		fflush(stdin);
		printf("\n-> ");
		
		letra = getchar();
		
		if(letra>='a'||letra<='e')
			v[letra-'a']++;
	}while(letra!='0');
	
	for(i=0;i<5;i++)
		printf("\n%c=%d",'a'+i,v[i]);
	return 0;
}
```