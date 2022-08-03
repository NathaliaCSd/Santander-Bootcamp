//lista alocacao dinamica - prof joice 

#include <stdio.h>
#include <stdlib.h>

int main(){

    double **matriz_a, **matriz_b, **matriz_c;
    int linhas, colunas, i,j;

    printf("Digite a quantidade de linhas");
    scanf("%d", &linhas);
    printf("Digite a quantidade de colunas:");
    scanf("%d", &colunas);

    matriz_a = (double **) malloc(linhas * sizeof(double *));
    matriz_b = (double **) malloc(linhas * sizeof(double *));
    matriz_c = (double **) malloc(linhas * sizeof(double *));


    for(i=0; i<linhas; i++){

        matriz_a[i] = (double *) malloc(linhas * sizeof(double));
        matriz_b[i] = (double *) malloc(linhas * sizeof(double));
        matriz_c[i] = (double *) malloc(linhas * sizeof(double));

    printf("Digite os valores da linha %d da matriz a: ", i+1);
    for(j=0; j < colunas; j++){
        scanf("%lf", &matriz_a[i][j]);
    }
    printf("Digite os valores da linha %d da matriz b: ", i+1);
        for(j=0; j < colunas; j++){
            scanf("%lf", &matriz_b[i][j]);
        }

    for(j=0; j < colunas; j++){
        matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
    }
}

     printf("A soma das matrizes eh; \n");
     for(i=0; i < linhas; i++){
         for(j = 0; j < colunas; j++){
             printf("%.1lf", matriz_c[i][j]);
         }
         printf("\n");
     }

     free(matriz_a);
     free(matriz_b);
     free(matriz_c);

     return 0;
}