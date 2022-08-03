#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*Faça uma função em C que receba uma cadeia de caracteres e retorne um ponteiro para a
primeira ocorrência de um espaço em branco na cadeia */

char pointer(char *string);

int main(){
    char string[20];
    char *p;

    fgets(string,20,stdin);
    printf("%s",string);
    p = pointer(string);
    printf("%c %c",*p,&p);
    
}

char pointer(char *string){
    char *p;
    int i,tam;

    tam = strlen(string);
    printf("%d",tam);
    for(i=0;i<tam;i++){
        if(string[i] == ' '){
            printf("Acontece");
            return &string[i];
        }
    }
}