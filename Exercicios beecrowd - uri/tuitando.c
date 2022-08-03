#include <stdio.h>
#include <string.h>

int main()
{

char palavra[500];
int T = 0;

  //obtendo a palavra com limite maximo de 30 caracteres
//fgets(palavra,500,stdin);
  scanf("%[^\n]", palavra);

//contando a quantidade de caracteres informados ate chegar no \0 -delimitador de uma string 
  while( palavra[T] != '\0'){
    T++;
  }

    printf("%d", T);
  
  if(T > 140){
    printf("MUTE\n");
  }else{
    printf("TWEET\n");
  }

    return 0;
}
