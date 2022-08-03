#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{

char nome[36], ultimo[12];
int N, cont = 0,  T = 0;
float L, Q, ricoMT;

  scanf("%d", &N);
  
  scanf("%f", &L);
  scanf("%f", &Q);
  
//obtendo aos nomes
// scanf(" %[^\n]", nome);
//fazendo a leitura dos N nomes
  for(int i = 0; i <N;i++){
    scanf(" %[^\n]", nome);   

  //como iniciel o contador com 0, o terceiro nome fica na posicao 2 , mesma coisa com os outros casos 
    if(i == N){
     ricoMT = ((Q/L)*N);
  printf("%s %.1f", nome, ricoMT);
      //puts(nome);
    }
  
  

    }
    return 0;
}
