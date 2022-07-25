#include <stdio.h>

int main(){

    int G, B, BolNatal;

    G = 0; // iniciando a var com 0 para nao ocorrer erros na somatoria

    scanf("%d %d", &B, &G);
    //se o resto da divisao do num de galhos por 2 for diferente de 0 (impar)
    if (G % 2 != 0){
        G = G - 1; // se o numero de galhos for impar eh arredondado para baixo 
    }

    BolNatal = G/2;

    if (B >= BolNatal){
        printf("Amelia tem todas as bolinhas\n");
    }else{
        printf("Faltam %d bolinha(s)\n", BolNatal - B);
    }

    return 0;
}