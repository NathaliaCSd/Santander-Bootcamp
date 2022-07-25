#include <stdio.h>

int main(){


    float nota1, nota2, media;
  int calc;

    do
    {
    scanf("%f", &nota1); 
    while ((nota1 < 1) || (nota1 > 10)) {
            printf("nota invalida\n");
            scanf("%f", &nota1);
        } 
       
       scanf("%f", &nota2);  
        while ((nota2 < 1) || (nota2> 10)) {
            printf("nota invalida\n");
            scanf("%f", &nota2);
        } 

        media = (nota1 + nota2)/2;
        printf("media = %.2f\n", media);
        
       
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &calc);
        while ((calc < 1) || (calc > 2)) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &calc);
        } 

    }while (calc == 1);
    
    
    return 0;
}