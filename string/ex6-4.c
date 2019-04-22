#include <stdio.h>
#include <string.h>

void strlen2(char* s1){ //retorna a qtd de caracteres
  int i=0, cont=0;
  do{
    cont += 1;
    i++;
  }while(s1[i] != '\0' );
  printf("Quantidade de letras: %d\n", cont);
}


int main(void) {
  char s1[15];
  printf("digite uma string: \n");
  scanf("%s", s1);
  strlen2(s1);

  return 0;
}
