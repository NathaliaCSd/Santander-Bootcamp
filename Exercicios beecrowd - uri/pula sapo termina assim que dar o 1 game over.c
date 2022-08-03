//pula sapo - termina assim que encontrar o primeiro cano maior que o esperado
//game over

#include <stdio.h>
#include <stdlib.h>

int main(){

    int altPulo, nCanos, altCanos, altAt,gameover = 0;

    scanf("%i%i", &altPulo, &nCanos);
    
    //for para que o programa rode ate i ser maior que o numero de canos  E 
    //E i seja gameover negado 
    for(int i = 1; i < nCanos && !gameover; i++){
        scanf("%i", &altCanos);
        if(abs(altAt + altCanos) > altPulo){
            gameover++;
        }
        altAt = altCanos;
    }
    if(gameover){
        printf("GAME OVER\n");
    }else{
        printf("YOU WIN\n");
    }

    return 0; 
}