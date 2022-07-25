#include <stdio.h>
#include <math.h>

int main(){

int N, C, somaG, somaV;
char T;

  somaG = 0;
  somaV = 0;
  
scanf("%d", &N);

      for(int i = 0; i < N*2; i++){
        scanf("%c", &T);
        scanf("%d", &C);

         if ( T == 'V'){
          somaV += C;
        }else if (T == 'G'){
          somaG += C;
        } 
      } 

    if( somaV >= somaG){
        printf("A greve vai parar.\n");
    }else{
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    }

  
  return 0;
}