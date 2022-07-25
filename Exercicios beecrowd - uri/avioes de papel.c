#include <stdio.h>

int main(){

    int C, P, F;

    scanf("%d %d %d", &C, &P, &F);
    //C - número de competidores
    //P - quantidade de folhas compradas pela Diretora e a 
    //F - quantidade de folhas de papel que cada competidor deve receber.
    
    if (P / C >= F){ 
    /* a divisao do numero de folhas compradas pela
     diretora pelo numero de competidores tem que ser maior que o numero
     de folhas que cada participante deve receber*/ 
        printf("S\n");
    }else{
        printf("N\n");
    }

    return 0;
}