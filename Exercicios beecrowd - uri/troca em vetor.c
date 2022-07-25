/*Faça um programa que leia um vetor N[20].
Troque a seguir, o primeiro elemento com o último,
o segundo elemento com o penúltimo, etc.,
até trocar o 10º com o 11º.
Mostre o vetor modificado.

*/


#include <stdio.h>

int main()
{
  int N[20];
  int num, aux;
  int j, i;

  for(int i = 0; i < 20; i++)
  {
      scanf("%d", &N[i]);
  }

    for(j = 19, i = 0; i < 10; i++, j--){
      aux = N[i];//troca
      N[i] = N[j];
      N[j] = aux;
    }

  for(i = 0; i < 20; i++){
    printf("N[%d] = %d\n",i, N[i]);
  }
  
  
  return 0;
}