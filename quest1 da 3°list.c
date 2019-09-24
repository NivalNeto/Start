#include <stdio.h>
#include <stdlib.h>	
#include <conio.h>
#include <locale.h>


int main()
{
	char s[100];
	int i;

	printf("Digite seu nome ");
	gets(s);
	
	for(i=0; s[i] != '\0' && i <sizeof(s); i++);	
		
	printf("Seu nome possui %d caracteres", i);	
	//OS ESPAÇOS SÃO CONTADOS !
}
