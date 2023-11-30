#include <stdio.h>

int main()
{
    int m, f, c; // Se define las variables que vamos a usar

     printf("Ingrese el numero de matrices que desea ingresar: ");// Se pide al usuario las dimensiones, filas y columnas
    scanf("%d", &m);
    printf("Ingrese el numero de columnas de las matrices: ");
    scanf("%d", &c);
    printf("Ingrese el numero de filas de las matrices: ");
    scanf("%d", &f);

    int matriz[f][c];

    return 0;
}