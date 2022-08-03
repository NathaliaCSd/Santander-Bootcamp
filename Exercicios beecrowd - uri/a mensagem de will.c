#include <stdio.h>

int main()
{
    char alfabeto[50];  
    int N; 
    int i;
    int testes = 0;

  //o loop parara eof fim de arquivo 
    while(scanf("%d", &testes) != EOF)
    {
      //obtendo as letras do alfabeto desejadas
        scanf("%s", alfabeto);
      //obtendo a quantidade de letras a serem selecionadas 
        scanf("%d", &N);

        int L[N];
//obtendo as letras 
        for(i = 0; i < N; i++)
        {
            scanf("%d", &L[i]);
        }
//imprimindo as letras dos numeros selecionados 
        for(i = 0; i<N; i++)
        {
            printf("%c", alfabeto[L[i]-1]);

            if (i == N - 1)
            {
                printf("\n");
            }
            
        }
    }

    return 0;
}