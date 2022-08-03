//alocacao dinamica lista 

#include <stdio.h>
#include <stdlib.h>

int* uniao(int *v1, int n1, int *v2, int n2, int *qtd){
    int *v3, i=0, j=0;

    *qtd = n1 + n2;
    v3 = (int *) malloc(*qtd * sizeof(int));

    while(i < n1){
        v3[j] = v1[i];
        j++;
        i++;
    }
    i = 0;

    while(i< n2){
        v3[j] = v2[i];
        j++;
        i++;
    }
    for(i = 0; i< *qtd; i++){
        for(j = i+1; j< *qtd; j++){
            if(v3[i] == v3[j]){
                for(j = j; j < *qtd -1; j++){
                    v3[j]= v3[j+1];
                }
                (*qtd)--;
            }
        }
    }

    return v3;
}

int main(){

    int v1[10] = {1,2,3,4,5,6,7,8,9,10}, v2[10] = {2,3,4,5,8,9,10,11,12,13}, qtd, i, *v3;
    v3 = uniao(v1, 10, v2, 10, &qtd);
    printf("O valor resultante foi: \n");
    for(i =0; i< qtd; i++){
        printf("%d\n", *v3);
        v3++;
    } 

    printf("\n");
    return 0;
    free(v3);
}