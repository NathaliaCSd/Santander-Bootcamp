#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int i = 0;
  int N[100];
  double X,Y;

  scanf("%lf", &X);
  Y = X;
  N[i] = Y; // atribuindo V ao vetor N
  
  for(i = 0; i < 100; i++)
  {
    printf("N[%d] = %.4lf\n", i ,Y); 
    Y = X/= 2; // a cada loop a var V divide por 2 
    N[i+1] = Y; // a prox posicao de N vale X 
  }
  return 0;
}