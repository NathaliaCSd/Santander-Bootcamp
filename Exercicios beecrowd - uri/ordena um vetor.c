//ordena vetor
#include <stdio.h>
#include <stdlib.h>


int main(){
int vet[4];
int i, j, aux;

for(i = 1; i <= 4; i++){
    printf("digite um valor:");
    scanf("%d", &vet[i]);
}

for(int i = 1; i <= 3; i++){
    for(j = 1+i; j <= 4; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
    }
}


    for(i = 1; i <= 4; i++){
        printf("{%d}", vet[i]);
    }
    return 0;
}