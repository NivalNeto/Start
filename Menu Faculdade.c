#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h> 
#include <string.h>
int main(){
	//Idioma do progama em português
	setlocale(LC_ALL, "Portuguese");	
	
	int i = 0;
	
	do {//Opções do menu
		printf("\nDigite 1 para saber se um número e par ou ímpar\n\n"
			"Digite --> 2 para saber a potência de um numero\n\n"
			"Digite --> 3 para saber a raiz de um número\n\n"
			"Digite --> 4 para saber se um ano é bissexto ou não bissexto\n\n"
			"Digite --> 5 para calcular médias ponderadas\n\n"
			"Digite --> 6 médias de 2 números\n\n"
			"Digite --> 7 número fatorial\n\n"
			"Digite --> 8 verificação de primo\n\n"
			"Digite --> 9 Fibonacci\n\n"
			"Digite --> 10 matrícula em hexadecimal\n\n"
			"Digite 0 para sair\n\n"
			"Digite aqui: ");
		scanf("%d", &i);
		system("CLS");
	
		switch(i){
	
		case 1:
		int num1;
		//entrada
			printf("\n\nDigite o número aqui: ");
			scanf("%d", &num1);
		//processamento
		if(num1 % 2 == 0){
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
 			//saída2
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
			//saída
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
		//saída
			printf("\nSua media é: %.2f\n\n", media);
		
		}else{
		//saída2
			printf("\nA nota não possui um valor válido\n\n");
		}
		break;
		
		case 7:
		
                int x;
                int fat;
                int numF;
		//Entrada
                	printf("Digite um número maior que zero: ");
                	scanf("\n%d", &numF);
                	x = numF; //não alterar o valor de numF
		//processamento
                if(x > 0){
                    for(fat=1; x>1; x--){
                      	fat=fat*x;
                    }
                //saída
                    printf("\nO fatorial de %d é: %d", numF, fat);
                } else{
                    printf("\nErro, valor diferente do esperado.");
                }
                break;
		
		case 8:
			
                int i, numpri;
                int  acum;
                //entrada
                do{
                    printf("Digite o número para verificar se é primo: ");
                    scanf("%d", &numpri);
                //processamento    
                    if(numpri<=0){
                        printf("Número inválido\n");
                    }
                }while(numpri <= 0);
                
                for(i = 2; i<numpri/2; i++){
                    if(numpri%i == 0){
                        acum++;
                        break;
                    }
                }
                if(acum == 0){
		//saída
                    printf("\nO número %d é primo.", numpri);
                } else{
                    printf("\nO número %d não é primo.", numpri);
                }
                break;
        		
		case 9:
	 	int auxi, valor, ant, prox, soma;
		//entrada
                	printf("Digite a quantidade de números que você espera na sua sequência de Fibonacci:");
                	scanf("%d", &valor);

                ant = 0;
                prox = 1;
				//processamento/saída
                if(valor >= 0){
                    printf("\nFibonacci: %d", prox);
                }else if(valor <= 0){
                    printf("\nFibonacci: %d", ant);
                }
                for(auxi = 2; auxi<=valor; auxi++){
                    soma = prox+ant;
                    ant = prox;
                    prox = soma;
                    printf("\n%d ", soma);
                }
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
