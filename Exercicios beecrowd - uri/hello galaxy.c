#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct galaxy{
char galaxia[51];
int dif;
} string;

int main (){

  //variaveis 
  int i, testes;
  int ano, msganos;
  int menor, pos, aux; 
     
  scanf("%d", &testes);
  struct galaxy civ[testes];
  do{
    //verificacao se o N for 0 retornara 0 encerrando o loop 
    if(testes == 0){
      return 0;
    }

  //obtendo os dados necessarios
    for(i = 0; i < testes; i++){
      scanf(" %s %d %d", civ[i].galaxia, &ano, &msganos);

      //calculando a diferença de tempo de envio e entrega de mensagem entre os planetas
    civ[i].dif = (ano - msganos);
    }

    //iniciando as var de controle com 0 
    menor = civ[0].dif;
    pos = 0;

    //varrendo o vetor do tamanho da quantidade de testes
    for (i = 1; i < testes; i++)
		{
			if (civ[i].dif < menor)
			{	
        //identificando qual o menor valor das diferenças 
				menor = civ[i].dif;
        //pega a posicao do menor valor 
				pos = i;

			}
		}
  //printando para o usuario o resultado final 
      printf("%s\n", civ[pos].galaxia);

    scanf("%d", &testes);
    
    }while(testes != 0);
     
return 0;
}