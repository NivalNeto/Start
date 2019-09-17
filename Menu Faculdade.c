#include <stdio.h>
#include <conio.h>
#include <locale.h>
#include <math.h> 
#include <string.h>
int main(){
	//Idioma do progama em português
	setlocale(LC_ALL, "Portuguese");	
	
	int i = 0;
	
	       do {	//Opções do menu
			printf("\n\nDigite 1 para saber se um número e par ou ímpar\n\n"
			"Digite --> 2 para saber a potência de um numero\n\n"
			"Digite --> 3 para saber a raiz de um número\n\n"
			"Digite --> 4 para saber se um ano é bissexto ou não bissexto\n\n"
			"Digite --> 5 para calcular médias ponderadas\n\n"
			"Digite --> 6 médias de 2 números\n\n"
			"Digite --> 7 número não disponível\n\n"
			"Digite --> 8 número não disponível\n\n"
			"Digite --> 9 número não disponível\n\n"
			"Digite --> 10 matrícula em hexadecimal\n\n"
			"Digite 0 para sair\n\n"
			"Digite aqui: ");
			scanf("%d", &i);
	
		switch(i){
	
	case 1:
		int num1;
			//entrada
			printf("\n\nDigite o número aqui: ");
			scanf("%d", &num1);
			//processamento
		if	(num1 % 2 == 0){
			printf("\n%d é par\n\n", num1);
			//saída
		}else{
			printf("\n%d é ímpar\n\n", num1);
		}		
			break;
		
	case 2:
		float a,p;
		int b;
			//entrada
			printf("\n\nEntre com o número: ");
			scanf("%f",&a);	
			printf("\nEntre com outro número: ");
			scanf("%d", &b);
			//processamento
			p=pow(a,b); 
			//saída
			printf("\nO resultado fica %e\n\n",p);
			break;
		
	case 3:
		float a1,resultado1;
		int b1;
			//entrada
			printf("\n\nEntre com um número flutuante: ");
			scanf("%f", &a1);
			printf("\nEntre com um outro número sendo inteiro: ");
			scanf("%d", &b1);
			//processamento
			resultado1 = pow(a1, 1./b1);
			//saída
			printf("\nO resultado fica %e\n\n", resultado1);
			break;
		
	case 4:
		int ano;
  			//entrada
			printf("\n\nDigite o ano: ");
 			 scanf("%d", &ano);
 			 //processamento
  		if (ano % 4 == 0) {
  			//saída
   			printf("\nAno bissexto\n\n");
  
 		}else {
 			//saída
    			printf("\nAno não bissexto\n\n");
 			}
			break;
		
	case 5:
		float n1, n2, n3, media;
			//entrada
			printf("\n\nDigite as notas aqui \n");
			printf("\nNota 1: ");
    			scanf("%f", &n1);
			
			printf("\nNota 2: ");
    			scanf("%f", &n2);
    		
   			printf("\nNota 3: ");
   			scanf("%f", &n3);
    			//processamento
			
			media = ((n1*1) + (n2*1) + (n3*2))/3;
			if (media >=60){
			
			//saída1	
        		printf("\nSua média foi: %.2f\n" , media);
       			printf("\nParabêns você foi aprovado\n\n");
       		
    		} else {
        		//saída
			printf("\nSua media foi: %.2f" , media);
       			printf("\nInfelizmente você foi reprovado, estude mais um pouco!\n\n");
    		}
			break;
		
	case 6:
		 //entrada
		 printf("Nota 1: ");
	         scanf("%f", &n1);
			
		 printf("Nota 2: ");
		 scanf("%f", &n2);
		 //processamento
		 media = (n1*n2)/2;
				
	if(n1,n2>= 0,0 && n1,n2<=10.0){
		//saída1
		printf("\nSua media é: %.2f\n\n", media);
		
	}else{
		//saída2
		printf("\nA nota não possui um valor válido\n\n");
		}
			break;
		
	case 7:
		//Números que se forem digitados, informarem ao usuário que não está disponivel
		printf("\nNenhuma ação para esse número, digite novamente");	
		break;
		
	case 8:
		//Números que se forem digitados, informarem ao usuário que não está disponivel
		printf("\nNenhuma ação para esse número, digite novamente");	
		break;
		
	case 9:
		//Números que se forem digitados, informarem ao usuário que não está disponivel
		printf("\nNenhuma ação para esse número, digite novamente");	
		break;
			
	case 10:
	char nome[61];
	int mtc;
		//entrada
		printf("Digite seu nome: ");
		scanf("%s", &nome);
		//processamento
		printf("Digite aqui sua matrícula: ");
		scanf("%d", &mtc);
		//saída
		printf("Ola %s sua matrícula em Hexadecimal é: %2X", nome, mtc);
		break;
	}
	
	}while (i != 0 && i<=10);
	
	getch();
	
}
