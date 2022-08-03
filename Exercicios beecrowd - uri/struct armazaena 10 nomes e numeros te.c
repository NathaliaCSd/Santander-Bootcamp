//struct armazaena 10 nomes e numeros telefonicos 

#include <stdio.h>
typedef struct {
    char nome[50];
    int telefone;
}dados;

int main () {
    dados cliente[10], aux;
    int i, j;
    for(i = 1; i<11; i++) {
        printf("Digite o nome do cliente: ");
        scanf("%s", &cliente[i].nome); 
        printf("Digite o número do cliente: ");
        scanf("%d", &cliente[i].telefone);
    }
    for (i = 0; i<10; i++) {
        for (j = 0; j<10; j++) {
            if(cliente[i].nome[0] < cliente[j].nome[0]) {
                aux = cliente[i];
                cliente[i] = cliente[j];
                cliente[j] = aux;
            }
        }
    }
    for (i = 1; i<11; i++) {
        printf("\nCliente %d:\n", i);
        printf("Nome: %s\n", cliente[i].nome);
        printf("Número: %d\n", cliente[i].telefone);
    }
    return 0;
}