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

    for (int i = 1; i < m; i++) // La variable de i se inicializa con 1 porque ya se va a usar una matriz fija al final llena de 1
    
    {
        printf("\n Matriz %d", i); // El primer for para ver cuantas matrices se va a utilizar
        for (int j = 0; j < f; j++)// Segundo for para ver las filas de las matrices
        {
            printf("\n");
            for (int k = 0; k < c; k++)// tercer for para ver las columnas de las matrices
            {
                matriz[j][k] = 0; // Se llena las matrices de 0
                printf("%d \t", matriz[j][k]);// Se imprime las matrices
            }
        }
    }

    return 0;
}