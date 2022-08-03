//conta quantos valores existem antre 0 e 10
//tb conta o tanto de numeros impares e pares, e a soma entre eles 

#include <stdio.h>
#include <stdlib.h>


int main(){
char nome[61];
float n1[4];
float n2[4];
float m[4];
float SM, MT;
int totAL;

for(int i = 1; i <= 4; i++){
    printf("ALUNO: %d\n", i);
    printf("Nome:");
    scanf("%s", &nome[i]);
    printf("Primeira nota: ");
    scanf("%f", &n1[i]);
    printf("Segunda nota: ");
    scanf("%f", &n2[i]);
    m[i] = (n1[i]+n2[i])/2;
    SM = SM + m[i];
}

MT = SM/4;
printf("LISTAGEM DE ALUNOS");
printf("--------------------------------------");
for(int i = 1; i <= 4; i++){
    printf("%c               %.1f\n", nome[i], m[i]);
    if(m[i] > MT){
        totAL = totAL + 1;
    }
}

printf("Ao todo temos %d alunos acima da media que eh %.1f", totAL, MT);
    return 0;
}