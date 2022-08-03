#include <stdio.h>

int main(){


    float nota1, nota2, media;
  int calc;


        

    do
    {

    scanf("%f", &nota1); 
       if(nota1 < 0 || nota1 > 10){
        printf("nota invalida\n");
        scanf("%f", &nota1);  
        }else{
         nota1= nota1;
       }
       scanf("%f", &nota2);  
        if(nota2 < 0 || nota2 > 10){
        printf("nota invalida\n");
        scanf("%f", &nota2);
       }else{
       nota2 = nota2;
       }

            media = (nota1 + nota2)/2;
            printf("media = %.2f\n", media);
        
       
        printf("Novo calculo (1-sim 2-nao)\n");
        scanf("%d", &calc);
            if(calc == 1){
                scanf("%f %f", &nota1, &nota2);
            }else{
                calc = 2;
            }   
    } while (calc == 1);
    
    
    return 0;
}