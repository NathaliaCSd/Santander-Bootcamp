//leia 3 valores reais e informe se formam um triângulo

#include <stdio.h>

int main()
{
    int lado1, lado2, lado3;

    scanf("%d", &lado1);
    scanf("%d", &lado2);
    scanf("%d", &lado3);


    if((lado1 + lado2) > lado3)
    {
        if((lado2 + lado3) > lado1)
        {
            if((lado1 + lado3) > lado2){
                printf("YES");
            }
            else{
                printf("NO.");
            }
        }else{
            printf("NO.");
        }
    }else{
        printf("NO.");
    }

    return 0;
}
