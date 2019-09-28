#include <stdio.h>
#include <string.h>
#include <conio.h>

int main ()
{	
	//Só consegui com a biblioteca.
	char texto1[50];
	char texto2[50];
    int i;
		
		printf("Digite o primeiro texto:\n ");
		gets(texto1);
		printf("Digite outro texto para concatenar:\n ");
		gets(texto2);
		
		strcat(texto1, texto2);
		
		printf("concatenado = %s\n", texto1);
		
	
		
		return 0;
		
}
