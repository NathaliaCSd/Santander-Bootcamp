#include <stdio.h>

int main()
{
    char nome[101];
    int i;

  //fazendo a leitura dos 10 nome 
  for(i = 0; i <10;i++){
    scanf(" %[^\n]", nome);   

  //como iniciel o contador com 0, o terceiro nome fica na posicao 2 , mesma coisa com os outros casos 
    if(i == 2){
      puts(nome);
    }else if(i == 6){
      puts(nome);
    }else if(i == 8){
      puts(nome);
    }
  }


  return 0;
}