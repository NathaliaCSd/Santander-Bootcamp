#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int N, M, troco, daptroca;
  //vetor eh a combinacao da soma de 2 notas 
  int notas[15] = {7, 12,22,52,102, 15,25,55,105,30,60,110,70,120, 150};
  
    scanf("%d", &N);//obtendo os valores 
    scanf("%d", &M);

while(N != 0 && M != 0){
  
//o valor inteiro M pago pelo cliente MENOS N da compra realizada pelo cliente
  troco = M - N;
  
for(int i = 0; i < 15; i++){
  if(notas[i] == troco){ // se o valor i do vetor for igual ao troco necessario quer dizwr que eh possivel pagar o troco com as 2 notas 
    daptroca = 1; // auxiliar recebe 1 para verificacao 
  }
  }

  if(daptroca == 1){
    printf("possible\n"); 
  }else{
    printf("impossible\n");
  }
  
  daptroca = 0; // zerando a var para nao acumular 
  
  scanf("%d", &N);//obtendo os valores 
  scanf("%d", &M);
}

  
  
  return 0;
}