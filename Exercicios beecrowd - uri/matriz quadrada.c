#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, j;
  int N;

  scanf("%d", &N);
  
  do{
    
    if(N == 0){
      return 0;
    }

    int M[N][N]; // criando a matriz e atrivbuindo N a ela 
    
   for(i = 0; i < N; i++)
			for(j = 0; j < N; j++)
			{
				if (i == j) // fileiras e colunas de mesmo indice recebem 1 
					M[i][j] = 1;
				if (i < j)
					M[i][j] = j - i + 1; 
				if (i > j)
					M[i][j] = i - j + 1;
			}


    for(i = 0; i < N; i++){
      for(j = 0; j < N; j++){
          if (j == 0)
					printf("%3d", M[i][j]);
				else
					printf(" %3d", M[i][j]);
        }
      printf("\n");
    }
printf("\n");
  
    scanf("%d", &N);

  }while(N != 0);

    return 0;
}
