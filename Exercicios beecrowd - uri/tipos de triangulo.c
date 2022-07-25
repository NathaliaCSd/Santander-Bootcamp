#include <stdio.h>

int main(){

    float A, B, C, x; // x eh uma var auxiliar para trocar os valores

    scanf("%f %f %f", &A, &B, &C);

    //ordenando os valores em ordem decrescente  
        if (A < B){ // se A menor que B entao
            x = A; // var auxiliar recebe valor de A
            A = B; // A recebe o valor de B ( que eh o maior)
            B = x; // B recebe o valor de x (que era o de A)
        }
        if ( B < C){ // se B menor que C
            x = B;   // var aux recebe o valor de B
            B = C; // B recebe o valor de C
            C = x;  // C recebe o valor de B que foi armazenado em x
        }
        if (A < B){ // se A menor que B // pq agora B tem o antigo valor de C
            x = A; // x recebe valor de A
            A = B; // A recebe valor de C
            B = x; // C recebe o valor de A
        }
        if (A >= B + C){
            printf("NAO FORMA TRIANGULO\n");
        }else if (A * A == B * B + C * C){
            printf("TRIANGULO RETANGULO\n");
        }else if (A *  A > B * B + C * C){
            printf("TRIANGULO OBTUSANGULO\n");
        }else if (A * A < B * B + C *C){
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (A == B && B == C){
            printf("TRIANGULO EQUILATERO\n");
        }else if (A == B || B == C){
            printf("TRIANGULO ISOSCELES\n");
        }

return 0;
    }