#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h> //(define uma janela ativa)que permite uma mudança na janela de texto ativa, parte da tela ondecaracteres podem ser impressos.
#include <string.h>
#define G gotoxy ///permite que a (coluna, linha) (vá para posição x, y) pré-definida do C que permite o posicionamento do cursor em qualquer posição da tela.
#define W delay(500); //permite uma parada temporária (em milisegundos) na execução de um programa.
#include <dos.h>
#include "jogo.h"

int main(){	
snake(1);
clrscr();
printf("Jogo produzido para fim do semestre\n");
printf("			Aperte ENTER e encerre seu jogo\n");
getch();
getchar();
}
