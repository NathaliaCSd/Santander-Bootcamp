#include <stdio.h>

struct DDD{
int DDD1;
int DDD2;
int DDD3;
int DDD4;
int DDD5;
int DDD6;
int DDD7;
int DDD8;

};

 int main (){

struct DDD numero;
int cod;
int i;

numero.DDD1 = 61;
numero.DDD2 = 71;
numero.DDD3 = 11;
numero.DDD4 = 21;
numero.DDD5 = 32;
numero.DDD6 = 19;
numero.DDD7 = 27;
numero.DDD8 = 31;


    scanf("%d", &cod);
   
  if(cod == 61){
  cod = numero.DDD1;
    printf("Brasilia\n");
  }else if(cod == 71){
  cod = numero.DDD2;
    printf("Salvador\n");
  }else if(cod == 11){
  cod = numero.DDD3;
    printf("Sao Paulo\n");
  }else if(cod == 21){
  cod = numero.DDD4;
    printf("Rio de Janeiro\n");
  }else if(cod == 32){
  cod = numero.DDD5;
    printf("Juiz de fora\n");
  }else if(cod == 19){
  cod = numero.DDD6;
    printf("Campinas\n");
  }else if(cod == 27){
  cod = numero.DDD7;
    printf("Vitoria\n");
  }else if(cod == 61){
  cod = numero.DDD8;
    printf("Belo Horizonte\n");
  }else {
    printf("DDD nao cadastrado\n");
  }
  
    return 0;
}

