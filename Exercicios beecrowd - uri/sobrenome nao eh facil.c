//sobrenome nao eh facil

#include <stdio.h>

int main(){

    char sobrenome[43];
    int k, N, j, cont;
    cont = 0;

    scanf("%d", &N);

    for(k = 0; k < N; k++){
        scanf("%s", sobrenome);
            for(j = 0; j < strlen(sobrenome); j++){
                if(cont < 3){
                    switch(sobrenome[j]){
                        case 'a':
                        case 'e':
                        case 'i':
                        case 'o':
                        case 'u':
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U':
                            cont = 0;
                            break;
                        default:
                            cont++;
                    }
                }
            }

        if(cont >= 3){
            printf("%s nao eh facil\n", sobrenome);
        }else{
            printf("%s eh facil\n");
            cont= 0;
        }
    }

    return 0;
}