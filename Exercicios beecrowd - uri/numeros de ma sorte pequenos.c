//numeros ma sorte pequenos 

#include <stdio.h>
#include <string.h>

int main(){
    char N[19];
    int i, cont;
    cont = 0;

    scanf("%s", N);

    for(i = 1; i < strlen(N); i++){
        if(N[i] == '3' && (N[i-1] == '1')){
            cont++;
        }
    }
    if(cont >= 1){
        printf("%s es de Mala Suerte\n", N);
    }else{
        printf("%s NO es de Mala Suerte\n", N);
    }

    return 0;
}