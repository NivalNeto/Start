#include <stdio.h>

int main(void) {
  int i;
  char texto1[100];
  char texto2[100];
  printf("Digite um texto para tranfiri-lo para outra variável e imprimi-lo: \n");
  scanf("%s",texto1);
  for(i=0;texto1[i]!='\0'&& i<sizeof(texto1);i++){
    texto2[i]=texto1[i];
  }
  printf(" O texto impresso em outra variável: \n %s",texto2);
}
