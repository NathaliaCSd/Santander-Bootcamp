#include <stdio.h>
#include <math.h>

int main(){

    int C, N, teste;
  
    teste = 0;

    scanf("%d", &C);

    do 
    {
        scanf("%d", &N);

       

        if(N > 8000){
          printf("Mais de 8000!\n");
        }else {
            printf("Inseto!\n");
        }

        teste++;
    }while(teste < C);

}