#include <stdio.h>
#include <string.h>

int main(){

    struct dado{
        char pais[50], frase[50];
    };

 struct dado f[25]={{"brasil", "Feliz Natal!"},{"alemanha","Frohliche Weihnachten!"}, {"austria","Frohe Weihnacht!" },{"coreia","Chuk Sung Tan!"},{"espanha","Feliz Navidad!" }, {"grecia","Kala Christougena!"},{"estados-unidos","Merry Christmas!"},
 {"inglaterra", "Merry Christmas!"},{"australia","Merry Christmas!"},{"portugal", "Feliz Natal!"},{"suecia","God Jul!"}, {"turquia","Mutlu Noeller"}, {"argentina","Feliz Navidad!"}, {"chile","Feliz Navidad!"}, {"mexico","Feliz Navidad!"},{"antardida","Merry Christmas!"}, {"canada","Merry Christmas!"}, {"irlanda","Nollaig Shona Dhuit!"}, {"belgica","Zalig Kerstfeest!"},
{"italia","Buon Natale!"}, {"libia","Buon Natale!"}, {"siria","Milad Mubarak!"}, {"marrocos","Milad Mubarak!"}, {"japao","Merii Kurisumasu!"}};

char palavra[100];
int i, cont=0;

while(scanf("%s", palavra) != EOF){
    cont = 0;
        for(i = 0; i < 24; i++){
            if((strcmp(f[i].pais, palavra)) == 0){
                printf("%s\n", f[i].frase);
            }else{
                cont++;
            }
        }

        if(cont == 24){
            printf("--- NOT FOUND ---\n");
        }

    return 0; 
}
