#include <stdio.h>

struct multiplos{
int N[1];
};

int main() {

//struct multiplos mult;
int n, tam;
double notas, grau, soma, menor, maior;
double dif;
char nome[100];


//printf("informa a quantidade de pessoas\n");
scanf("%d", &n); //obtendo o tamanho do vet
tam = n;
  
  for(int i = 1; i <= tam; i++){
    
notas = 0;
menor = -1;
maior = 11;
soma = 0;

    
   // printf("informa o nome\n");
    scanf("%s", nome);
   // printf("informa o grau\n");
    scanf("%lf", &grau); 
    for (int i = 0; i < 7; ++i){

 scanf("%lf", &notas);

      soma += notas;
      
    
    if(maior > notas){
      maior = notas;
  //  }else{
   //   maior = notas;
    }
    if(menor < notas){
      menor = notas;  
    //}else{
    //  menor = notas;
    }

      dif = menor + maior;
    
      }
   
    soma =  soma - dif;
  printf("%s %.2lf\n", nome, soma*grau);
  }
 
  
     
  return 0;
}