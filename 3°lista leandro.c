#include <stdio.h>
#include <stdlib.h>	
#include <conio.h>
#include <locale.h>

int main()
	setlocale(LC_ALL, "Portuguese");
{
	//Questão 1
	char s[100];
	int i;

	printf("Digite seu nome ");
	gets(s);
	
	for(i=0; s[i] != '\0' && i <sizeof(s); i++);	
		
	printf("Seu nome possui %d caracteres", i);	
	//OS ESPAÇOS SÃO CONTADOS !
}
	//Questão 2
	char s[20];
	int i = 0;
	int contador = 0;

	printf("Escreva seu texto: ");
	gets(s);
	for(i =0; s[i] != '\0' && i <sizeof(s); i++){
			if(s[i] == 'a' || s[i] == 'a' ||
			s[i] =='e' || s[i] == 'E' ||
			s[i] =='i' || s[i] == 'I' ||
			s[i] =='o' || s[i] == 'O' ||
			s[i] =='u' || s[i] == 'u') 
		
			contador++;
			}	
	printf("A quantidade de vogais são %d", contador);
		
	}
	

	
