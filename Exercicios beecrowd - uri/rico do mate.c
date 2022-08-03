//rico do mate

#include <stdio.h>

int main(){

    int n, cont = 0;
    double g, c;

    scanf(" %d %lf %lf", &n, &g, &c);

    char nomes[n][12];

    for(int i = 0; i < n; i++){
        scanf("%s", nomes[i]);
    }

    while ( g - c > 0){
        g -= c;
        cont++;
    }
    cont = cont % n;

    printf("%s %.1lf\n", nomes[cont], g);

    return 0;
}