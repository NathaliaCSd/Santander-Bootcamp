#include <stdio.h>

int main(void) {

int N[10] = {0}; // iniciando o vetor com todos campos valendo 0
int V;

    scanf("%d", &V); //obtendo o valor que iniciara o vetor 
  
  for(int i = 0; i < 10; i++){
     N[i] = V; // vetor tem o valor de var atribuido a ele 
    printf("N[%d] = %d\n", i, V);
    V = V*2; // o valor de var eh ele dobrado a cada loop 
  }

  return 0;
}