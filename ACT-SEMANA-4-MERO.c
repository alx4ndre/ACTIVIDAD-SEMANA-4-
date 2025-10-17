#include <stdio.h> 

int main() 
{
    int Mero[5][5];  
    
   
    for(int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++) {
            Mero[i][j] = 0;
        }
    }

    
    printf("Mostrar matriz Mero 5x5 solo con ceros:\n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%3d ", Mero[i][j]); 
        }
        printf("\n");
    }

    return 0;
}

