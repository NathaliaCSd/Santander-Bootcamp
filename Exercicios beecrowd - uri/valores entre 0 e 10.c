//conta quantos valores existem antre 0 e 10
//tb conta o tanto de numeros impares e pares, e a soma entre eles 

#include <stdio.h>
#include <stdlib.h>

int main(){

    int TOt010 = 0;
    int C, V, SImp, SPar = 0;
    int impar;
    double par;
     
   

    for( C = 1; C <= 6; C++){
         printf("Digite um valor\n");
        scanf("%d", &V);
        if((V>=0) & (V <= 10)){
            TOt010++;
            if(V%2 == 0){
                SPar = SPar +1;
                par = par + V;
            }
            if(V%2 == 1){
                SImp= SImp + 1;
                impar = impar + V;
            }
            
        }
    }
        printf("Ao todo foram %d valores entre 0 e 10\n", TOt010);
        printf("Nesse intervalo, o total de numeros impares foi %d\nE sua soma eh de %d\n", SImp, impar);
        printf("Nesse intervalo, o total de numeros pares foi %d\nE sua soma eh de %.0lf\n", SPar, par);

    return 0;
}