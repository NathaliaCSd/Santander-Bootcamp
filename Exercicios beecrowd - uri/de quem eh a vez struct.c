#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct jogadores{
char jogador[101];
char jogador2[101];
char escolha[6];
};


int main(){
  
  int QT;
  long long num, num2;
  char result;
  int i;
  
  struct jogadores jog;


    for(i = 0;i < 101; i++){
      jog.jogador[i] = jog.jogador2[i] = 0;
    }

  //obtendo a quantidade de testes 
    scanf("%d" , &QT); 

    while(QT--){
        scanf("%s", jog.jogador); scanf("%s", jog.escolha);
        scanf("%s", jog.jogador2); scanf("%s", jog.escolha);
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
      
        if(jog.escolha[0] == 'P' && result == 'P'){
          printf("%s\n", jog.jogador2);
        } //se o jogador escolheu impar e o resultado der impar o vencedor eh o jogador 2 
        else if(jog.escolha[0] == 'I' && result == 'I'){
          printf("%s\n", jog.jogador2);
        }else{// caso contrario
          printf("%s\n", jog.jogador); 
        } 
    }

	 return 0;
}