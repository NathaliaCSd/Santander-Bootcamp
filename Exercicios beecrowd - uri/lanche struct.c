#include <stdio.h>

struct lanchonete{
float pedido[6];
int quantidade;
};

 int main (){

struct lanchonete lanche;
int cod;
int i;
   
lanche.pedido[1] = 4.00;
lanche.pedido[2] = 4.50;
lanche.pedido[3] = 5.00;
lanche.pedido[4] = 2.00;
lanche.pedido[5] = 1.50;

    scanf("%f", lanche.pedido);
   cod = lanche.pedido[i];
    scanf("%d", &lanche.quantidade);
    printf("Total: R$ %.2f\n", lanche.pedido[cod]* lanche.quantidade);
    
    return 0;
}

