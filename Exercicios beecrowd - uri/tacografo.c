#include <stdio.h>
#include <math.h>

int main(){

int N, V, F;
int total;

  total = 0;
  
scanf("%d", &N);

    for(int i = 0; i < N; i++){
      scanf("%d", &V);
      scanf("%d", &F);

      total += V*F;

    }

printf("%d\n", total);

  return 0;
}