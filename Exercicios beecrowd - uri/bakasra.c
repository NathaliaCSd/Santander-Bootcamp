//Nathalia Cristina Santos
//795698

#include <stdio.h> // bibliotecas
#include <stdlib.h>
#include <math.h> //biblioteca para funcoes matematicas 


int calcula_baskara1(int delta, int a, int b){
   float baskara;
   
    baskara = ((-b - sqrt(delta))/2*a);
//retorna o baskara com o sinal negativo 
    return baskara;
}

int calcula_baskara2(int delta, int a, int b){
   float baskara;
   
    baskara = ((-b + sqrt(delta))/2*a);
//retorna o baskara com o sinal positivo 
    return baskara;
}
//funcao principal
int main()
{
    float a, b, c, delta;// variaveis para os calculos 
    char tecla; //opcao para leitura de novos dados
    float baskara;

    /*entrada de dados*/
    printf("Pressione C ou c para começar\n");
    scanf("%c", &tecla);
  
    while(tecla == 'C' || tecla == 'c'){
    printf("\nDigite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C : ");
    scanf("%f", &c);
//calculando delta
    delta = b*b - 4*a*c;
      //testando condicoes para as raizes do delta
        if(delta < 0){
            printf("A equacao nao possui raizes reais\n");
        }if(delta == 0){
            printf("A equacao possui duas raizes reais identicas\n");
            printf("Baskara eh %d\n", calcula_baskara1(delta, a,b));
        }else if(delta > 0){
            printf("A equacao possui duas raizes reais distintas\n");
            printf("X1: %d\n", calcula_baskara1(delta, a,b));
            printf("X2: %d\n", calcula_baskara2(delta, a,b));
        }
//pergutando se deseja calcular novamente 
  printf("Deseja continuar?\n");
      scanf("%s", &tecla);
      //se for C ou C, continuara 
      
    }
    

    return 0;

}
