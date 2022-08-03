//mario piramide
//monta a piramide do mario de acordo com a altura dada pelo usuario

#include <stdio.h>
#include <stdlib.h>


int main(){
 
 int altura;
 char ponto=1;

/*2- Se o tamanho da altura for menor que 1 ou maior que 8(ou não inteiro), fique nesse passo até que o usuário insira uma entrada válida.
 3- Itere a variável i até o tamanho da altura.
    4- Imprima os #. [Não se esqueça da quebra de linha!]
    */
    printf("qual altura vc quer pra piramide?\n");
    scanf("%d",  &altura);

    while(altura <= 0 || altura > 8){
        printf("valor invalido! insira outro valor por favor\n");
        scanf("%d",  &altura);
    }
    // for para adicionar uma nova linha 
    for (int i = 0; i < altura; i++)
    {
        // for para adicionar os espacos em branco
        for (int k = altura - i; k > 1; k--)
        {
            printf(" ");
        }
        // for para adicionar os quadradinhos
        for (int j = 0; j <= i; j++)
        {
            printf("O");
        }
        printf("\n"); // quebra de linha pra formar a piramide
    }
        
    
    return 0;
}