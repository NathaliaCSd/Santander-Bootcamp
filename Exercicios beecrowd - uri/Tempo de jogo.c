#include <stdio.h>

int main(){


    int hInicial, hFinal, tempo;

    scanf("%d", &hInicial);
    scanf("%d", &hFinal);

    

    if(hInicial > hFinal){
       tempo = (24 - hInicial) + (hFinal); 
    }else if(hInicial < hFinal){
        tempo = (((24-hInicial)+hFinal))-24;
    }else{
        tempo = (24-hInicial)+ hFinal;
    }
    
    printf("O JOGO DUROU %d HORA(S)\n", tempo);

   return 0;
}