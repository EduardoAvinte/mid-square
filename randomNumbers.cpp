#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valorDoMeio(int seed) //função que retorna os 2 valores centrais do seed
{
	char intToStr[100]="";
	char strMeio[4];
	int valorMetade;
	int resultado;

	sprintf(intToStr, "%d", seed); 
	valorMetade=strlen(intToStr)/2;
	if(valorMetade==0)
	{
		strMeio[0] = intToStr[valorMetade];
	}
	else
	{
		strMeio[0] = intToStr[valorMetade-1];
		strMeio[1] = intToStr[valorMetade];
	}
	resultado = atoi(strMeio); //retornando string para int

	return resultado;
}


void geradorRandomico(int qtd) //função que imprime os valores randomicos
{
	int seed = qtd;

	printf("%d\n",seed); //primeira impressão(seed)

	for(int i=1; i < qtd; i++)
	{
		seed = seed * seed;
		seed = valorDoMeio(seed); //função que retorna os 2 valores centrais do seed
		printf("%d\n",seed);
	}

}

int main()
{
    int qtd=0;

    printf("Informe a quantidade de numeros que voce deseja gerar: ");
    scanf("%d",&qtd);

   	geradorRandomico(qtd); //função que imprime os valores randomicos

    return 0;
}
