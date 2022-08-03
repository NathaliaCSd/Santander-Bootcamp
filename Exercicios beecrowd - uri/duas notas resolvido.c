#include <stdio.h>

int main(){
    //vetor de tamanho indefinido com as notas 
    int notas[] = {100, 20, 50, 10, 5, 2};
    int n, m, dif, qtd, i;

    scanf("%d %d", &n, &m);

   //programa recebera valores enquanto n E m for diferente de 0 
    while((n != 0) && (m != 0)){
        //calculando diferença pra saber o troco
        dif = m - n;
        qtd = 0; // zerando var quantidade 
        //for com i indo ate 6 que eh a quantidade de notas
        for(i = 0; i < 6; i++){
            //quantidade recebe seu valor acumulado + 
            // div da dif (troco) pela nota (passando por todo o vetor )
            qtd = qtd + dif/notas[i];
            //dif (troco) recebe resto da div entre dif e o vetor notas 
            dif = dif % notas[i];
        }
        //se qtd igual a 2 quer dizer que duas notas conseguemm pagar o troco necessario 
        if(qtd == 2){
            printf("possible\n");
        }else{
            printf("impossible\n");
        }

        //escaneando os valores novamente 
        scanf("%d %d", &n, &m);
    }

    return 0;
}