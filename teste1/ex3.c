#include <stdio.h>

int main(){
	int nota, i, media, soma=0;
	char notas[50];

	for(i=0;i<50;i++){
		printf("nota: "); scanf("%d", &nota);
		printf("\n");
		soma += nota;
		notas[i] = nota;
	}
	media = soma / 50;
	printf("Media da turma: %d\n", media);
	soma = 0;

	for(i=0;i<50;i++){
		if(notas[i] >= media){
				soma += 1;
		}
	}
	printf("qtd de notas acima da media: %d\n", soma);


	return 0;
}
		
		
		
