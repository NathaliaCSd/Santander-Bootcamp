// Resolução lista P3 Exercício 5 - Profo. Ednaldo Pizzolato
#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int numero;
} agenda;

int main() {
    agenda agenda_1[50]={0};
    int opcao, i=0, fim=1;
    char nome_busca[50], letra_busca;
    while (fim) {
        printf("1 - Entrar um nome na agenda\n2 - Procurar um nome na agenda\n3 - Buscar uma letra\n0 - Para finalizar\nEscolha uma opção: ");
        fflush(stdout);
        scanf("%d", &opcao);
        switch (opcao) {
        case 1: {
                printf("Digite o nome: ");
                scanf("%s", &agenda_1[i].nome);
                printf("Digite o numero: ");
                scanf("%d", &agenda_1[i].numero);
                i++;
                break; 
        }
        case 2: {
        printf("Digite o nome da pessoa a ser procurada: ");
       scanf("%s", &nome_busca);
      for(int j=0; j<=i; j++) {
      if (strcmp(agenda_1[j].nome, nome_busca) == 0) {
        printf("----Nome(s) Encontrado---\n");
        printf("Nome: %s\nNumero: %d\n", agenda_1[j].nome, agenda_1[j].numero);
                    }
                }
                break;
        }
// Continuação exercício 3
        case 3: {   
      printf("Digite uma letra a ser procurada: ");
      scanf("%c", &letra_busca);
                for(int j=0; j<=i; j++) {
                    if (agenda_1[j].nome[0] == letra_busca) {
      printf("\n----Nome(s) Encontrado---\n");
      printf("Nome: %s\nNumero: %d\n", agenda_1[j].nome, agenda_1[j].numero);
                    }
                }
   break;
        }
        default: {
      printf("Programa finalizado.\n");
      fim = 0;
        }
        }
    }
    return 0;
}