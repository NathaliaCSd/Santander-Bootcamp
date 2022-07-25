#include <stdio.h>
#include <math.h>

int main(){

int N, M, soma;
  soma = 0;

  do{
    scanf("%d", &M);
    scanf("%d", &N);

    if((M <= 0) || (N <= 0)){
      return 0;
    }
    if(N < M){
      for(int i = N; i <= M; i++){
     printf("%d ", i);
        soma += i;
      }
      printf("Sum=%d\n", soma);
    }else if(N > M){
      for(int i = M; i <= N; i++){
        soma += i;
        printf("%d ", i);
      }
        printf("Sum=%d\n", soma);

    }
    soma = 0;
  }while(M > 0 && N > 0);

  return 0;
}