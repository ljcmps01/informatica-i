# TP 1 - Informatica I

## Introduccion

Repositorio del TP1 de informatica I - UTN FRA

## Uso

- Desarrollar los ejercicios del TP en archivos separados dentro de la carpeta src, ej. 'src/ejercicio1.c' 'src/ejercicio2.c' y asi.
- Ejecutar dentro de este directorio el comando "make SRC={nombre del ejercicio}", ejemplo: _make SRC=ejercicio1_ (no incluir el .c)
- Para ejecutar el programa se puede utilizar el argumento "run" al llamar make, ej. _make run SRC=ejercicio1_
- (TO DO) testear programas con el test correspondiente

## Estructura

la estructura general del repositorio es la siguiente:

├── Makefile                # Makefile para la compilacion de los programas  
├── README.md  
├── build                   #Carpeta con los archivos compilados  
│   ├── bin                 #   ejecutables compilados  
│   └── obj                 #   obj precompilados  
├── doc                     #Documentacion del tp  
│   ├── INFO1_TP1_2024.pdf  #   Ejercicios del TP1  
│   └── TPs Condiciones.pdf #   Condiciones de aprobacion  
├── src                     #Carpeta de archivos src (.c)  
│   └── ejemplo.c  
└── test                    #Carpeta de programas de testeo  
