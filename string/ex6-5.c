#include <stdio.h>
#include <string.h>

int strlen2(char* s1){ //retorna a qtd de caracteres
  int i=0, cont=0;
  do{
    cont += 1;
    i++;
  }while(s1[i] != '\0' );
  return(cont);
}

void strjoin2(char* d, char* o1, char* o2){ //junta duas strings
  int i,j;

  for(i=0;i<strlen2(o1);i++){
    d[i] = o1[i];
  }
  for(j=0;j<strlen(o2);j++){
    d[i+j] = o2[j];
  }

  d[i+j] = '\0';


}


int main(void) {
  char s1[15], s2[15];
  printf("digite uma string: \n");
  scanf("%s", s1);
  printf("digite uma string: \n");
  scanf("%s", s2);
  int tam_s1 = strlen2(s1);
  int tam_s2 = strlen2(s2);

  int tam_s1s2=tam_s1 + tam_s2;
  char sf[tam_s1s2];

  strjoin2(sf, s1, s2);
  printf("nova string: %s\n", sf);

  return 0;
}
