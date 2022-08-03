/* matriz soma de 2 matriz
gera valores das 2 matriz aleatoriamente */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void soma_matriz(int matriz_a[5][5], int matriz_b[5][5]) {
    int i, j;
    printf("\n\nAs somas das matrizes é: \n");
    for(i=0; i<5; i++) {
        for (j = 0; j<5; j++) {
            printf("%*d ", 3, matriz_a[i][j] + matriz_b[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz_a[5][5], matriz_b[5][5], i, j;
    srand(time(NULL));
    for(i=0; i<5; i++) {
        for (j = 0; j<5; j++) {
            matriz_a[i][j] = rand() % 100;
            printf("%*d ", 3, matriz_a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0; i<5; i++) {
        for (j = 0; j<5; j++) {
            matriz_b[i][j] = rand() % 100;
            printf("%*d ", 3, matriz_b[i][j]);
        }
        printf("\n");
    }
    soma_matriz(matriz_a, matriz_b);
    return 0;
}