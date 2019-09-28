#include <stdio.h>
#include <conio.h>

int main ()
{
	char texto1[50];
	char texto2[50];
    int i;
		
		printf("Digite o primeiro texto:\n ");
		gets(texto1);
		printf("Digite outro texto para imprimir em outra variavel:\n ");
		gets(texto2);
		
		
		printf("%s %s", texto1,texto2);
		
		return 0;
		
	
		
}
