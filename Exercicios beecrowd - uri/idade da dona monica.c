#include <stdio.h>

int main(){

    int M, A, B, idadeMVelho;

    scanf("%d %d %d", &M, &A, &B);
//tira a idade da mae da soma dos outros 2 filhos 
    idadeMVelho = M - A - B;

//se a for maior que idadeMvelho E idade B entao o mais velho eh o A
    if(A > idadeMVelho && A > B){
        printf("%d\n", A); 
    }else if(idadeMVelho > A && idadeMVelho > B){ 
    // se nao for nem A E nem B entao o mais velho eh o idadeMvelho
        printf("%d\n", idadeMVelho);
    }else{
    // se  nao for nenhum dos dois o mais velho eh B 
        printf("%d\n", B);
    }

    return 0;
}