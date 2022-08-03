#include <stdio.h>

struct multiplos{
int N[1];
};

int main() {

struct multiplos mult;
int L, n, tam;
//var dos multiplos de 2,3,4 e 5
int m2 = 0, m3 = 0, m4 = 0, m5 = 0;

scanf("%d", &n); //obtendo o tamanho do vet
mult.N[n] = mult.N[1];
  tam = n;
  
  for(int i = 1; i <= tam; i++){
    scanf("%d", &L);
     mult.N[i] = L; 
    if(L%2 == 0){
      m2++; 
    }if(L%3 == 0){
      m3++; 
    }if(L%4 == 0){
      m4++; 
    }if(L%5 == 0){
      m5++; 
    }
  }
  
  printf("%d Multiplo(s) de 2\n", m2);
  printf("%d Multiplo(s) de 3\n", m3);
  printf("%d Multiplo(s) de 4\n", m4);
  printf("%d Multiplo(s) de 5\n", m5);
  
  return 0;
}