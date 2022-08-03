//conta quantos valores existem antre 0 e 10
//tb conta o tanto de numeros impares e pares, e a soma entre eles 

#include <stdio.h>
#include <stdlib.h>


int proxfibonaci(int a, int b){
int c;
    c = a + b;
printf("%d", c);
    a = b;
    b = c;
}


int main(){
int c, t1, t2, t3; 

t1 = 0;
printf("%d", t1)
t2 = 1;
printf("t2 %d ", t2);

for( c = 3; c <= 10; c++){
    proxfibonaci(t1, t2);
}

    return 0;
}