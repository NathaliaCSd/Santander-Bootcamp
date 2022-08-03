//alocacao dinamica -- lista professora joice

#include <stdio.h>
#include <stdlib.h>

void le_notas(float *notas, int quantidade_notas){
    int i;
    for( i =0; i < quantidade_notas; i++){
        printf("Digite a nota %d \n", i+1);
        scanf("%f", &notas[i]);
    }
}
float media(float *notas, int quantidade_notas){
    int i;
    float soma;
    for(i = 0; i < quantidade_notas; i++){
        soma += notas[i];
    }

    return( soma/quantidade_notas);
}

int main(){

    int quantidade_notas;
    float *notas;

    printf("Digite quanta(s) nota(s) sera(ao) computadas: ");
    scanf("%d", &quantidade_notas);
    notas = (float *) malloc(quantidade_notas*sizeof(float));
    le_notas(notas, quantidade_notas);
    printf("a media de notas foi: %.1f\n", media(notas, quantidade_notas));
    free(notas);

    return 0;
}