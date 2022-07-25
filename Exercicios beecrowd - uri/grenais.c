#include <stdio.h>

int main(){


    int golInter, golGre, inter, gremio, empate, grenal;
    int numGrenal;

    numGrenal = 1;
    inter = 0;
    gremio = 0;
    empate = 0;

    scanf("%d %d", &golInter, &golGre);

    do
    {
       if(golGre > golInter){
        gremio += 1;
       }else if (golInter > golGre){
        inter += 1;
       }else{
        empate += 1;
       }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &grenal);
        if(grenal == 1){
            scanf("%d %d", &golInter, &golGre);
            numGrenal += 1;
        }else{
            grenal = 2;
        }
    } while (grenal == 1);
    

    printf("%d grenais\n", numGrenal);
    printf("Inter: %d\n", inter);
    printf("Gremio: %d\n", gremio);
    printf("Empates: %d\n", empate);
    if (gremio > inter )
    {
       printf("Gremio venceu mais\n");
    }else{
        printf("Inter venceu mais\n");
    }
    
    return 0;
}