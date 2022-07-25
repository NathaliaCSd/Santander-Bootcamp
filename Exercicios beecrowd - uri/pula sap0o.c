#include <stdio.h>
int main()
{
    int P, N, cnt=0, i, dif;
    int pulo;
    scanf("%d%d", &P, &N);

  
    for(i=0; i<N; i++){
        scanf("%d",  &pulo);
            for(i=1; i<N; i++)
            {
                if(pulo > pulo*(i-1))
                 dif = (i - (i-1));
                else
                 dif = ((i-1) - (i));
                if(dif<=P)
                    cnt++;
            }

      
    }
        
    if(cnt== N-1)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}