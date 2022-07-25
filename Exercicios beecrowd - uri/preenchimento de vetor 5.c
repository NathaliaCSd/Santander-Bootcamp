#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int i = 0;
  int par[5], impar[5];
  int num;
  int contp = 0, conti = 0; // contadores para o par e para o impar

  for(i = 0; i < 15; i++){
    scanf("%d", &num);
    
      if(num%2 == 0){
        par[contp] = num;
        contp++;
          if(contp == 5){ // quando o vet encher 
              for(int j = 0; j < 5; j++){
              printf("par[%d] = %d\n", j ,par[j]);
              contp = 0; // esvaziando o vetor par quando ele encher 
             }
          }
      }else{
          impar[conti] = num;
          conti++;
          if(conti == 5){
            for(int j = 0; j < 5; j++){
              printf("impar[%d] = %d\n", j ,impar[j]);
              conti = 0;
          }
            }
      }
  }
        
        for(int j = 0; j < conti; j++){
              printf("impar[%d] = %d\n", j ,impar[j]);
        } 
  for(int j = 0; j < contp; j++){
                printf("par[%d] = %d\n", j ,par[j]);
        } 
  
  return 0;
}