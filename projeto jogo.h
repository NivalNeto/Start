#ifndef _BIBLI
	#define _BIBLI_
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //(define uma janela ativa)que permite uma mudança na janela de texto ativa, parte da tela ondecaracteres podem ser impressos.
#include <string.h>
#define G gotoxy ///permite que a (coluna, linha) (vá para posição x, y) pré-definida do C que permite o posicionamento do cursor em qualquer posição da tela.
#define W delay(500); //permite uma parada temporária (em milisegundos) na execução de um programa.
#include <dos.h>
HANDLE  hConsoleOut = 0;                  
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;  //informação do console 
CHAR attribute;


void initvideo()
{
	//// Obtenha as informações da tela e limpe a tela.
  hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
  attribute = 0x07;
}

void gotoxy(int column, int row) //linha e coluna sem parametro
{
  COORD c;

  c.X = column +20;
  c.Y = row + 1;
  SetConsoleCursorPosition(hConsoleOut, c);
}

void clrscr(void) //A função clrscr (clear screen) pré-definida do C que permite limpar toda tela
{
  COORD c;
  DWORD len, wr;

  if(!hConsoleOut)
    initvideo();
    
  len = csbiInfo.dwSize.X * csbiInfo.dwSize.Y;
  c.X = c.Y = 0;
  FillConsoleOutputCharacter(hConsoleOut, ' ', len, c, &wr);
  FillConsoleOutputAttribute(hConsoleOut, attribute, len, c, &wr);

  gotoxy(1, 1);
}

void delay(DWORD milliseconds) //padronizar algumas funções que necessitam de uma faixa específica de valores, no caso, os millisegundos.
{
  Sleep(milliseconds);
}
 
void snake(int){ //parte mecânica do jogo
int vetor[2000],vetorx[2000];
int limpa[2000],limpax[2000],limpatam=-1;
int tam=0,v=0,x1=0,y1=0,perdeu=0,y3=0;
        
       int w=0,time=100,d=10,velo=0,anted=0,random=0,r1=30,r2=15,anterandom=0; //tamnanho,velocidade e niveis até o char.
       int comparede=0,level=1,rapido=1,saiu=0;
       int n1,n2,n3,n4,n32, nt,nn3;
       n1=n2=n3=nt=n4=0; n32=1; 
       char c='f'; //aractere de texto usamos apostrofes
       clrscr(); //limpar
       int x=10,y=10,qtd=0,pausa=0;
             
       while (1){
		
       clrscr();  //permite limpar toda tela
    	
    	
       G(20,y3+5);puts("\x1");
       G(25,5);puts("MODO INFINITO");
       G(25,10);puts("COM PAREDE");
       G(25,15);puts("SAIR");
       c=getche();
       if(c=='e' || c==72)y3=y3-5;
       if(c=='d' || c==80)y3=y3+5;
       if(y3>10)y3=0;
       if(y3<0 )y3=10;      
       if(c==13){
       G(20,y3+5);puts("            ");
       G(25,5);puts("               ");
       G(25,10);puts("              ");
       G(25,15);puts("              ");
                 if(y3==10)exit(2);
                 if(y3==0)break;
                 if(y3==5){comparede=1;break;}
                 }      
             }
       c='f';
       while (1){
      if(tam==0){
                 G(vetorx[0],vetor[0]);puts(" ");
                 }
      for(int i=0;i<limpatam;i++){
      G(vetorx[i],vetor[i]);puts(" ");
                                  }
       if(random>anterandom){
        anterandom=random;
        for(int i=0;i<qtd%20;i++)r1=rand()%67;
        r1+=3;
        for(int i=0;i<qtd%20;i++)r2=rand()%19;
        r2+=3;                             
                             }
             
       anted=d;
       if(c==-32)c=getche();
       rapido=0;
       if(c==77 && d!=2)d=0;
       if(c==72 && d!=3)d=1;
       if(c==75 && d!=0)d=2;
       if(c==80 && d!=1)d=3;
       if(c==13)d=4; 
       if(w==1)if(c==32)rapido=1;
       else  if(c==27){saiu=1;break;}
       else  if(c=='p')pausa=1;
       if(tam>0){
       v=v%tam;                      
       vetorx[v]=x;
       vetor[v]=y;
       v++;}
       switch(d){
       case 0:x++;break;
       case 1:y--;break;
       case 2:x--;break;
       case 3:y++;break;
       case 4:y++;x--;break;
                 }
       for(int i=2;i<25;i++){
       G(2,i); puts("\xBA");       
       G(73,i);puts("\xBA");
               }
       for(int i=3;i<73;i++){
       G(i,2); puts("\xCD");
       G(i,25);puts("\xCD");
               }
        system("COLOR B0"); 

       G(73,2);puts("\xBB");
       G(2,25);puts("\xC8");
       G(2,2); puts("\xC9");
      G(73,25);puts("\xBC");
      G(75,3);printf("LEVEL:");
      G(75,4);printf("%d",level);
      G(75,5);printf("PONTOS\n\n");
      G(75,6);printf(":%d",tam);
      G(75,7); printf("Feito por:");
      G(75,8); printf("NIVAL");
      G(75,9); printf(" & ");
      G(75,10);printf("WESLEY");
      
       if(comparede==1){if(x>71 || y>24 || x<3 || y<3)perdeu=1;}
       if(x>71)x=3;
       if(y>24)y=3;
       if(x<3)x=71;
       if(y<3)y=24;
       
                
       G(x,y);puts("\xFA");
       if(tam==0){
         vetorx[0]=x;
         vetor[0]=y;
                  }
       for(int i=0;i<tam;i++){

G(vetorx[i],vetor[i]);puts("\xFE");
limpax[i]=vetorx[i];
limpa[i]=vetor[i];
limpatam=tam;
if(vetorx[i]==x&&vetor[i]==y)perdeu=1;
                            }  
                            
       w=kbhit();
       if(w==1){
       qtd++;
       G(70,24); c=getch();
       G(70,24);puts(" ");
 
                }
       
       if(x==r1 && y==r2){random++;tam++;}//tam aumenta a pontuação
       G(r1,r2);
       if(pausa==1){getch();pausa=0;c='a'; }
      if(rapido==0)delay(time/level);
      if(rapido!=0)delay((time/(level+1)));
       if(random%10==0 && anterandom!=random)level++; 
       qtd++;
       qtd=qtd%60;
       if(perdeu==1)break;
       }
       clrscr();
       G(1,1);
     

void salvar(int);{ //funçoes que não tem paramêtros


  FILE *tam; // cria variável ponteiro para o arquivo
  char palavra[100];
  //int pontos;  --> bug que não salva
  
   // variável do tipo string
 	 
  //abrindo o arquivo com tipo de abertura w
	tam = fopen("rank.txt", "a"); //w grava dados
  //testando se o arquivo foi realmente criado
  if(tam == NULL)
  {
  printf("Erro na abertura do arquivo!");
  
  }
  
  printf("Escreva seu nome:  ");
  scanf("%s", palavra);
  //printf(					"Digite seus pontos: "); --> pergunta os pontos mas não salva
  //scanf("%d", pontos);
  

  
  

  //usando fprintf para armazenar a string no arquivo
  fprintf(tam, "%s\n", palavra);
  //fprintf(tam, "%d", pontos); --> bug não salva
  //usando fclose para fechar o arquivo
  fclose(tam);
  
  printf("		Dados gravados com sucesso!");
  
  getch();

}
}
#endif
