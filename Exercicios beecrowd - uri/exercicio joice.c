#include <stdio.h>
#include <stdlib.h>


//recebe o vetor de acordo com a quantidade informada e preenche ele com valores aleatorios
int recebe_vet(int vet[], int tam){
  int vetor;
    for (int j = 0; j < tam; j++){
      vet[tam] = (rand() % 101) / 10.0;
    }
    
      vetor = vet[tam];

    return vetor;
}
/*
Função que retorna a média dos valores do vetor
*/
float mediaVetor(int vet[], int tam) {
    float media, soma = 0;
    int i;

    for(i = 0; i < tam; i++){
        soma += vet[i];
    }

    media = soma / tam;

    return media;
}
/*
Função que retorna o maior elemento de um vetor
*/
int maior_valor(int vet[], int tam, float mediaVetor){
  int maior = 0;
  for (int i = 0; i < tam; i++) {
    if (i == 0) {
        vet[i] = maior;
    }
    if (vet[i] > mediaVetor) {
        maior = vet[i];
    }
  }
    return maior;
}

//funcao principal 
int main(){
  
  int vetor[];
  double resultado1, resultado2;
  int tam;

  printf("Informe a quantidade de elementos no vetor: ");
    scanf("%d", &tam);
    recebe_vet(vetor[], tam);

  resultado1 = maior(vetor[quantidade]);
  resultado2 = mediaVetor(vetor, 6);
  printf("A media dos vetores e de %.2f\n", resultado1);
  printf("\nOs valores maiores que a media foram: %10.1d", resultado2);
      
    //Liberação da memória
    free(vet[tam]);

    return 0;
}