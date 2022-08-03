//conta quantos valores existem antre 0 e 10
//tb conta o tanto de numeros impares e pares, e a soma entre eles 

#include <stdio.h>
#include <stdlib.h>


void topo(float a){
    printf("--------------------------------------\n");
    printf("DETECTOR DE PESADO\n");
    printf("Maior peso ate agora %f kg\n", a);
    printf("---------------------------------------\n");
}


int main(){
char nome[30];
char pesado;
float peso, MAI;


    for(int i = 0; i <= 5; i++){
        printf("Digite um nome\n");
        scanf("%s", nome);
        printf("Informe o peso de %s\n", nome);
        scanf("%f", &peso);
        if (peso > MAI){
            MAI = peso;
        }
    topo(MAI);
    }

    topo(MAI);
    printf("\na pessoa mais pesada foi %s com %f\n", nome, MAI);

    return 0;
}