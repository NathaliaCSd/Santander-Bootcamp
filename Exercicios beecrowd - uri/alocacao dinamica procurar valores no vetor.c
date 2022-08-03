//alocacao dinamica lista prof joice

#include <stdio.h>
#include <stdlib.h>

int *vetores_entre(int *v, int n, int min, int max, int *qtd){
    int *vetor_b, i, contador = 0;
    
    for(i = 0; i < n; i++){
        if(v[i] < max && v[i] > min){
            contador++;
        }
    }

    vetor_b = (int *) malloc (contador*sizeof(int));
    *qtd = contador;
    contador = 0;
        for(i =0; i<n; i++){
            if((v[i] < max) && (v[i] > min)){
                vetor_b[contador] = v[i];
            contador++;
            }
        }
        if(contador){
            return vetor_b;
        }else{
            return NULL;
        }

}

int main(){
int vetor_a[9]= {1,2,3,4,5,6,7,8,9}, quantidade, minimo, maximo, i, *vetor_b;
for(i = 0; i < 9; i++){
    printf("%d", vetor_a[i]);
}
printf("dos valores acima, digite um valor maximo e um minimo");
scanf("%d %d", &maximo, &minimo);
vetor_b = valores_entre(vetor_a, 9, minimo, maximo, &quantidade);
if(quantidade){
    for(i=0; i< quantidade; i++){
        printf("%d", *vetor_b);
        vetor_b++;
    }
}else{
    printf("nao  houve valores achados!\n");
}

return 0;
}