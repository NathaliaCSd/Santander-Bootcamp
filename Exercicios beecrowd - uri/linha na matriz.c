#include <stdio.h>
#include <stdlib.h>

int main()
{
float M[12][12];
int i, j;
int L;
char T;
float soma = 0, media = 0;

  scanf("%d", &L);
  scanf(" %c", &T); // deixar espaco antes do %

  //preenchendo o vetor 
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
        scanf("%f", &M[i][j]);
      if(i == L){
         soma += M[i][j];
      }
    }
}
  
  if(T == 'S'){
  printf("%.1f\n", soma);
}
  else if(T == 'M'){
      media = soma/12.0;
    printf("%.1f\n", media);
}

    return 0;
}
