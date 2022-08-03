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

int main()
{
    float a, b, c, delta, raiz_delta;// variaveis para os calculos 
    char tecla; //opcao para leitura de novos dados
    float baskara;

    /*entrada de dados*/
    while(tecla == 'C' || tecla == 'c'){
    printf("\nDigite o valor de A: ");
    scanf("%f", &a);
    printf("\nDigite o valor de B: ");
    scanf("%f", &b);
    printf("\nDigite o valor de C : ");
    scanf("%f", &c);

    delta = b*b - 4*a*c;
      
        if(delta < 0){
            printf("A equacao nao possui raizes reais\n");
        }if(delta == 0){
            printf("A equacao possui duas raizes reais identicas");
            printf("Baskara eh %d\n", calcula_baskara1(delta, a,b));
        }else if(delta > 0){
            printf("A equacao possui duas raizes reais distintas");
            printf("Baskara eh %d\n", calcula_baskara2(delta, a,b));
            printf("Baskara eh %d\n", calcula_baskara2(delta, a,b));
        }

        printf("Deseja continuar?\n");
        scanf("%c", &tecla);
    }
    

    return 0;

}
