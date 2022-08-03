#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Faça uma função em C que receba uma cadeia de caracteres 
e um caractere e, caso o caractere ocorra na cadeia de caracteres, remover todas as ocorrências dele da cadeia*/

void removech (char *string, char ch);
void funcrena(char c,char *string);

int main(){
    char *string;
    char ch;
    int i,j,casos=0,tam;
    
    string = (char*) malloc(20*sizeof(char));

    gets(string);
    scanf(" %c",&ch);

    removech(string,ch);
    printf("String na main: %s\n",string);
    
    
    //funcrena(ch,string);
}

void removech (char *string, char ch){
    int casos=0, i, j, tam, aconteceu;

    tam = strlen(string);
    printf("\nTamanho original: %d",tam);
    
    for(i=0;i<tam;i++){
        aconteceu = 0;

        if(string[i] == ch){
           
            for(j=i;j<tam;j++){
                string[j] = string[j+1];
                aconteceu = 1;
            }
        }
        if(aconteceu){
            tam--;
            //printf("\nString: %s\ttam: %d\n",string,tam); //passo a passo
            i=0;
        }   
    }
}

void funcrena(char c,char *string){
  int i=0,j=0;
  char newstr[strlen(string)];

  while(i<strlen(string)){
    if(c != string[i]){
      newstr[j] = string[i];
      j++;
    }
    i++;
  }
  string = newstr;
  printf("%s",string);
  printf("\n%s",newstr);
}