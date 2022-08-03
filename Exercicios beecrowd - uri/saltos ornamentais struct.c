#include <stdio.h>

struct competicao{
double notas;
char nome[100];
};

int main() {

struct competicao comp;
int n, tam;
double grau, soma, menor, maior;
double dif;


//printf("informa a quantidade de pessoas\n");
scanf("%d", &n); //obtendo o tamanho do vet
tam = n;
  
  for(int i = 1; i <= tam; i++){
    
comp.notas = 0;
menor = -1;
maior = 11;
soma = 0;

    
   // printf("informa o nome\n");
    scanf("%s", comp.nome);
   // printf("informa o grau\n");
    scanf("%lf", &grau); 
    for (int i = 0; i < 7; ++i){

 scanf("%lf", &comp.notas);

      soma += comp.notas;
      
    
    if(maior > comp.notas){
      maior = comp.notas;
  //  }else{
   //   maior = notas;
    }
    if(menor < comp.notas){
      menor = comp.notas;  
    //}else{
    //  menor = notas;
    }

      dif = menor + maior;
    
      }
   
    soma =  soma - dif;
  printf("%s %.2lf\n", comp.nome, soma*grau);
  }
 
  
     
  return 0;
}