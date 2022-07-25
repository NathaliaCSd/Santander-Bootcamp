#include <stdio.h>
#include <stdlib.h>

int main()
{
float M[12][12];
int i, j;
char O;
float soma = 0, media = 0;

  scanf(" %c", &O); // deixar espaco antes do %

  //preenchendo o vetor 
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
        scanf("%f", &M[i][j]);
      if(j > i){
        soma += M[i][j];
      }
    }
}
  
  if(O == 'S'){
  printf("%.1f\n", soma);
}
  else if(O == 'M'){
      media = soma/66; // 66 eh o numero de espacos da metade da diagonal principal (os que estao pintados em verde)
    printf("%.1f\n", media);
}

    return 0;
}
