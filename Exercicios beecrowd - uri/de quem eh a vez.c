#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


int main(){
     int QT;
     long long num, num2;
     char jogador[101], jogador2[101], i, escolha[6], result;

    for(i = 0;i < 101; i++){
      jogador[i] = jogador2[i] = 0;
    }

  //obtendo a quantidade de testes 
    scanf("%d" , &QT); 

    while(QT--){
        scanf("%s", jogador); scanf("%s", escolha);
        scanf("%s", jogador2); scanf("%s", escolha);
        scanf("%lld %lld" , &num, &num2);

      //se o resto por par 
        if(num % 2 == 0 && num2 % 2 == 0){
          result = 'P';
        }else if(num % 2 != 0 && num2 % 2 != 0){
          result = 'P';
        }
        else{
          result = 'I';
        } 
      
        if(escolha[0] == 'P' && result == 'P'){
          printf("%s\n", jogador2);
        } //se o jogador escolheu impar e o resultado der impar o vencedor eh o jogador 2 
        else if(escolha[0] == 'I' && result == 'I'){
          printf("%s\n", jogador2);
        }else{// caso contrario
          printf("%s\n", jogador); 
        } 
    }

	 return 0;
}