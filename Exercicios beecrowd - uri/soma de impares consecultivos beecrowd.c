#include <stdio.h>

int main(){

    int X,Y, soma1, soma2;

  soma1 = 0;
  soma2 = 0;

    scanf("%d %d", &X, &Y);

    for(int i = 1; i <= X; i++){
            if(X%i==1){
            soma1 += X;
            }
}
        for (int j = 1; i <= Y; i++)
        {        
            if(Y%i==1){
          soma2 += Y;
            }
        }
        
    printf("%d", soma1+soma2);

    return 0;
}

