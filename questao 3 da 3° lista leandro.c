#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{
	char texto1[50];
	char texto2[50];
     int retorno;

		//Só consegui com a biblioteca
		printf("Digite o primeiro texto:\n ");
		gets(texto1);
		printf("Digite outro texto para concatenar:\n ");
		gets(texto2);
		
		
		strncmp(texto1, texto2, 50);
		
		 printf("retorno = %g\n", retorno);
		
		//0: conteúdo das strings são iguais
		//< 0: conteúdo da string1 é menor do que string2
		//> 0: conteúdo da string1 é maior do que string2
		
	return 0;
		
}
