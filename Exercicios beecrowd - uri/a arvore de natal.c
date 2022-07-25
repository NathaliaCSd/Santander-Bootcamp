#include <stdio.h>

int main(){

    int g, N, galhos, h, d, pode;
    pode = 0;
    galhos = 0;

    scanf("%d", &N);

        do{
            scanf("%d", &h);
            scanf("%d", &d);
            scanf("%d", &g);

            if(h >= 200 || h <= 300){
                pode = pode + 1;
            }
            if(d >= 50){
                pode = pode + 1;
            }
            if(g >= 150){
                pode = pode + 1;
            }

            if(pode == 3){
                printf("Sim\n");
            }else{
                printf("Nao\n");
            }
 
            galhos++;

        }while(galhos <= N);

    
}