#include <stdio.h>
#include <math.h>

int main(){

    int N, area, teste;
    float raio;
  
    teste = 0;

    scanf("%d", &N);

    do 
    {
        scanf("%d", &area);

        raio = sqrt(area/(4*3.14));

        if(raio < 12){
          printf("vermelho = R$ %.2f\n", area * 0.09);
        }else if(raio >= 12 && raio <= 15){
          printf("azul = R$ %.2f\n", area * 0.07);
        }else if(raio > 15){
          printf("amarelo = R$ %.2f\n",area * 0.05 ); 
        }

        teste++;
    }while(teste < N);

}