#include <stdio.h>

int main(void) {

int N[4] = {0};
//var dos multiplos de 2,3,4 e 5
int c1, c3, c2, c4;

  scanf("%d %d %d %d", &c1, &c2, &c3, &c4);
  
  for(int i = 0; i < 4; i++){
    N[0] = c1;
    N[1] = c2;
    N[2] = c3;
    N[3] = c4;
  
    if(N[i] == 1){
        printf("%d\n", i+1);
    }
  }
  
  return 0;
}
