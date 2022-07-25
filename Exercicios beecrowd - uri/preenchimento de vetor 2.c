#include <stdio.h>

int main(void) {

int N[1000] = {0}; // iniciando o vetor com todos campos valendo 0
int T, x;

scanf("%d", &T); //obtendo o valor que iniciara o vet
  
  for(int i = 0; i < 1000; i++){
    x = i%T; // cada x eh o resto da divisao da posicao pelo valor informado 
      printf("N[%d] = %d\n", i, x);
  }

  return 0;
}
