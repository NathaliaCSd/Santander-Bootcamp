//maior elemento matriz 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    int matriz[10][10], coluna, linha, i=0, j=0, maior=0;
    srand(time(NULL));
    while(i<10) {
        while(j<10) {
            matriz[i][j] = rand() % 100;
            j++;
        }
        j=0;
        i++;
    }
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha = i + 1;
                coluna = j + 1;
            }
        }
    }
    for(i=0; i<10; i++) {
        for(j=0; j<10; j++) {
            printf("%*d ", 3, matriz[i][j]);
            j++;
        }
        printf("\n");
    }
    printf("O maior elemento da matriz é: %d\nEle está na linha: %d coluna:%d\n", maior, linha, coluna);
    return 0;
}