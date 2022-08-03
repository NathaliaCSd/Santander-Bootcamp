//vetor verifica se ha primos e gera numeros aleatorios
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int conta_primo (int vetor[10]) {
    int contador = 0, primo, i, j=2;
    for(i = 0; i<10; i++) {
        primo = 1;
        j = 2;
        while (primo && j<vetor[i]) {
            if(vetor[i] % j == 0) {
                primo = 0;
            } 
            j++;
        }
        if (primo) {
            contador++; 
        }
    }
    return contador;
}

int main () {
    int vetor[10];
    srand(time(NULL));
    for(int i = 0; i<10; i++) {
        vetor[i] = (rand() % 100) + 2;
        printf("%*d ", 3, vetor[i]);
    }
    printf("\n");
    printf("Há %d primos no vetor\n.", conta_primo(vetor));
    return 0;
}