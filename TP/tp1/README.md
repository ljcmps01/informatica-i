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

## Ejercicios

1. Escribir en algoritmo que realice las siguientes acciones:
   1. Ingrese valores para 2 variables NUMERO1 y NUMERO2.
   2. Efectúe el producto de dichas variables. Muestre el resultado por pantalla.
   3. Obtenga el cuadrado de NUMERO1, la décima parte del NUMERO2 y lo muestre por pantalla.
2. Diseñar un algoritmo que lea un valor que representa la medida de un radio. Se pide
que calcule y muestre el perímetro y el área del círculo.
3. De un alumno del curso de ingreso a la UTN se ingresan las notas obtenidas en los exámenes de las 3 materias que lo forman. Calcular el promedio del alumno y mostrarlo por pantalla.
4. Ingresar valores numéricos para las variables A, B, C, D, e informar si su promedio esmayor que o igual a 10.
5. Se registran de los empleados de una empresa Número de legajo, sueldo y sexo (1femenino y 2 masculino). Diseñar un algoritmo que permita informar cuantas mujeresganan más de $ 500000 y cuantos hombres ganan menos de $ 400000.
6. Una compañía de seguros está abriendo un depto. de finanzas y estableció unprograma para captar clientes, que consiste en lo siguiente: Si el monto por el que seefectúa la fianza es menor que $500000 la cuota a pagar será por el 3% del monto, y siel monto es mayor que $500000 la cuota a pagar será el 2% del monto. La afianzadoradesea determinar cuál será la cuota que debe pagar un cliente.
7. Un entrenador le ha propuesto a un atleta recorrer la misma ruta de cinco kilómetrospor 3 días, para determinar si es apto para la prueba de 5 Kilómetros o debe buscar otraespecialidad. Para considerarlo apto debe cumplir por lo menos una de las siguientescondiciones: - Que en ninguna de las pruebas haga un tiempo mayor a 25 minutos.- Que al menos en una de las pruebas realice un tiempo mayor a 20 minutos- Que su promedio de tiempos sea menor o igual a 18 minutos.
8. Un Municipio desea determinar cuántas personas de cada una de las secciones quecomponen su zona asisten el día de las votaciones. Las secciones son: norte, sur ycentro. También desea determinar cuál es la sección con mayor número de votantes.
9. Realizar un programa que convierta el tiempo de una carrera en tiempo para correr unkilómetro y en promedio de velocidad en kilómetros por hora. Se deberá ingresar: la distancia recorrida en kilómetros y el tiempo en minutos y segundos. Se mostrará por pantalla un texto como el siguiente:"Ha recorrido 10 Km. en 36 min. 23 seg. Su velocidad promedio fue de 16.49 km/h."
10. Tomando como base los resultados obtenidos en un laboratorio de análisis clínicos,un médico determina si una persona tiene anemia o no, lo cual depende de su nivel dehemoglobina en la sangre, de su edad y de su sexo. Si el nivel de hemoglobina que tiene una persona es menor que el rango que le corresponde, se determina su resultadocomo positivo y en caso contrario como negativo. La tabla en la que el medico se basa para obtener el resultado es la siguiente:

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
