# Ecuacion general de sistemas numericos
$$
N = a_mb^n+a_{m-1}b^{n-1}+...+a_0b⁰+a_{-1}b^{-1}+...+a_xb^x 
$$
$$
\begin{matrix}
\text{b = base numerica} \\
\text{a = (0;b-1) rango }\\
\text{m = posicion del digito}
\end{matrix}
$$
## Ejemplo
$$
512 = 5 \times 10² + 10\times10¹ + 2\times10⁰=512
$$

# Numeros negativos
Para representar numeros negativos en binario se ocupa el bit mas significativo o "de la izquierda" para indicar que son negativos con un 1:
* 7 = 0111
* -7 = 1111
# Complementos
Se utilizan los complementos para poder realizar restas sin necesidad de utilizar la resta de forma explicita
## Complemento tecnico o autentico $(C_1)$
Se obtiene alternando los valores de cada digito exceptuando el del signo
* -7 = 1111
* -7$_{C_1}$= 1000
## Complemento restringido $({C_2})$
Se obtiene sumandole 1 al $C_1$ 
* -7$_{C_1}$ = 1000
* -7$C_2$ = 1001

| Decimal | Neg | C1  | C2  |
| ------- | --- | --- | --- |
| 7       |     |     |     |
| 6       |     |     |     |
| 5       |     |     |     |
| 4       |     |     |     |
| 3       |     |     |     |
| 2       |     |     |     |
| 1       |     |     |     |
| 0       |     |     |     |
| -1      |     |     |     |
| -2      |     |     |     |
| -3      |     |     |     |
| -4      |     |     |     |
| -5      |     |     |     |
| -6      |     |     |     |
| -7      |     |     |     |
