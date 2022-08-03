// Resolução lista P3 Exercício 7 - Profo. Ednaldo Pizzolato
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int anterior_chute=0, chute=0, numero, acertou = 1;
    srand(time(NULL));
    numero = rand() % 1000;
    printf("Digite um chute: ");
    scanf("%d", &chute);
    while(acertou) {
        if(chute == numero) {
            printf("Parabéns você acertou!\nO número era: %d\nSeu chute foi de: %d\n", numero, chute);
            acertou = 0;
        }
        else {
            while(chute < numero) {
                printf("Tente um número maior!\n");
                anterior_chute = chute;
                scanf("%d", &chute);
                if (chute < anterior_chute) {
                    printf("Você deve chutar um número maior que %d!\n", anterior_chute);
                }
            }
            while(chute > numero) {
                printf("Tente um número menor!\n");
                anterior_chute = chute;
                scanf("%d", &chute);
                if (chute > anterior_chute) {
                    printf("Você deve chutar um número menor que %d!\n", anterior_chute);
                }
            }
        }
    }
    return 0;
}