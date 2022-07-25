#include <stdio.h>

int main()
{
double M[12][12];
int i, j;
char O;
double soma = 0, media = 0;
int comeco = 1,metade = 10;

  scanf(" %c", &O); // deixar espaco antes do %

  //preenchendo o vetor 
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
        scanf("%lf", &M[i][j]); 
    }      
  }
//calculando a soma 
  //i apenas da linha 0 ate a 4 
  for(i = 0; i < 5; i++){
    for(j = comeco; j <= metade; j++){
        soma += M[i][j];
    }
    //a area em verde forma um triangulo
  //crescendo e decrescendo no final 
    comeco++;
    metade--;
    }
  
  if(O == 'S'){
    printf("%.1lf\n", soma);
  }
  else if(O == 'M'){
      media = soma/30; // 30 eh o numero de espacos da metade da diagonal principal (os que estao pintados em verde)
    printf("%.1lf\n", media);
}

    return 0;
}
