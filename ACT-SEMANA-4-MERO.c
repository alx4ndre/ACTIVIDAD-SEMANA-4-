#include <stdio.h>

int main() 
{
    int filas, columnas;

    printf("Ingresar un numero de filas para la matriz MERO: ");
    scanf("%d", &filas);
    printf("Ingrese un numero de columnas para la matriz MERO: ");
    scanf("%d", &columnas);

    int Mero[filas][columnas];

    
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            if(i == j)
                Mero[i][j] = 1;
            else
                Mero[i][j] = 0;
        }
    }

    printf("\nMatriz Mero con diagonal en 1:\n");
    for(int i = 0; i < filas; i++){
        for(int j = 0; j < columnas; j++){
            printf("%d ", Mero[i][j]);
        }
        printf("\n");
    }

    return 0;
}


