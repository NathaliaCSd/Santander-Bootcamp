#include <stdio.h>
#include <math.h>

int main(){

int N, matricula, matriculaM;
float nota, notaM;

  notaM = 0;
  
scanf("%d", &N);

    for(int i = 0; i < N; i++){
      scanf("%d", &matricula);
      scanf("%f", &nota);

      if(nota >= notaM){
        notaM = nota;
        matriculaM = matricula;
      }

    }
  
    if ( notaM < 8){
        printf("Minimum note not reached\n");
    }else{
        printf("%d\n", matriculaM);
    }

  
  return 0;
}