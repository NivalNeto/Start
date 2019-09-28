#include <stdio.h>


int main ()
{
	char texto1[50];
	char texto2[50];
    int i;
		printf("Programa que compare dois textos:\n ");
		printf("digite o primeiro texto ate 50 caracteres:\n ");
		gets(texto1);
		printf("digite o segundo texto ate 50 caracteres:\n ");
		gets(texto2);
	for (i=0; texto1[i], texto2[i] != 0 && i < sizeof(texto1, texto2); i++){
         if (strcmp(texto1, texto2))
	    {
	    	printf("Sao diferentes");
        	} else {
		        printf("Sao iguais!");
	        }
    }
	
	

	return 0;
}
