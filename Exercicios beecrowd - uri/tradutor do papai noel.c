#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char *paises[24] = { "brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos",
			"inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile",
			"mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria",
			"marrocos", "japao" };
char *frases[24] = { "Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
				"Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
				"Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
				"Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!",
				"Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!" };
typedef struct{

	char pais[50];
	char frase[100];

} tradutor;

tradutor trad[24];
unsigned short pos, tem;


int main ()
{

  //preenchendo os dois vetores 
	for (int i = 0; i < 24; i++)
	{
    //funcao de copia de strings
    //do vetor para a var tipo struct 
		strcpy(trad[i].pais, paises[i]);
		strcpy(trad[i].frase, frases[i]);
	}
	char pais[100];

  //usuario vai informar valor (no caso pais) ate EOF
	while (scanf(" %s", pais) != EOF)
	{
    //varre o vator de pais e se encontrar ele a var TEM ganha 1 e a var pos guarda o numero da posicao dele no vetor 
		for (int i = 0; i < 24; i++)
		if (strcmp(trad[i].pais, pais) == 0)
		{
			pos = i;
      tem = 1;
      }
  //se no for anterior verificou que o pais informado existe 
    //ele vai printar na tela a var do tipo struct na posicao guardada antes 
    if (tem == 1){
      printf("%s\n", trad[pos].frase);
    }else{ // caso contrario infomara que nao foi encontrado 
      printf("--- NOT FOUND ---\n");
    }

  //zerando os indices para os valores nao acumularem ou darem 
    pos = 0;
    tem = 0;
	}


	return 0;

}