//conta quantos valores existem antre 0 e 10
//tb conta o tanto de numeros impares e pares, e a soma entre eles 

#include <stdio.h>
#include <stdlib.h>


int soma(int a, int b){

    a = a +1;
    b = b +2;
    printf("valor de A = %d\n", a);
    printf("valor de B = %d\n", b);
    printf("soma A + B %d \n", a + b);
}


int main(){
int x = 4, y = 8;

soma(x,y);
printf("valor de x = %d \n", x);
printf("valor de y = %d \n", y);

    return 0;
}