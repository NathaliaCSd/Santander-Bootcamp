#include <stdio.h>

int main()
{
  int i = 0;
  float A[100] = {0};

  for(i = 0; i < 4; i++)
  {
      scanf("%f", &A[i]);
  }

  //Segunda alteração um laço for para imprimir as notas coletadas
  for(i = 0; i < 4; i++)
  {
    if(A[i] <= 10){
      printf("A[%d] = %.1f\n", i, A[i]);
    }
      
  }
  return 0;
}