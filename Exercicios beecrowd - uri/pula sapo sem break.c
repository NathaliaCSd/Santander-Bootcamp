//exercicio pula sapo sem o break 

#include <stdio.h>
#include <math.h>

int main(){
    int p, n, anterior, valor, resposta = 0;

    scanf("%i %i", &p, &n);

    //n eh decrementado pq na contagem o primeiro scanf f ja conta 1 
    n--;

    scanf("%i", &anterior);

//condicao para que nao seja necessario o uso do break 
    while(n-- && !resposta){
        if(abs(valor - anterior) > p){
            resposta = 1;
        }
        anterior = valor;
    }

    if(resposta){
        printf("GAME OVER\n");
    }else{
        printf("YOU WIN\n");
    }

    return 0; 
}