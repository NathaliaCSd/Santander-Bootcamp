//valores matriz
#include <stdio.h>
#include <stdlib.h>


int main(){
int mat[4][4];
int l, c, sDP, p2L, mai3C;


sDP = 0;
p2L = 1;

for( l = 1; l <= 4; l++){
    for(c = 1; c <= 4; c++){

    printf("digite o valor da posicao [%d,%d]:", l, c);
    scanf("%d", &mat[l][c]);
        if( l = c){
            sDP = sDP + mat[l,c]
        }
     }
}

for( l = 1; l <= 4; l++){
    for(c = 1; c <= 4; c++){
    printf("[%d,%d]\n", mat[l][c]);
    }
}

    for(c = 1; c <= 4; c++){
        p2L = p2L * mat[2,c];
    }

    for( l = 1; l <= 4; l++){
        if(mat[l,3] > mai2C){
            mai3C = mat[l,3];
        }
    }
printf("A soma dos valores da diagonal principal eh %d\n", sDP);
printf("O produto dos valores da segunda coluna eh %d\n", p2L);
printf("O maior valor da terceira coluna eh %d\n", mai3C); 
    
    return 0;
}