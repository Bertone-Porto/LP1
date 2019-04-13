#include <stdio.h>

void preenche(int* vec, int n){ //preenche o vetor vec
	int i;
	for(i=0;i<n;i++){
		printf("digite: \n"); 
		scanf("%d", &vec[i]);
	}

}

void media(int* vec, int n){ //retorna a media do vetor vec
	int i, media, soma=0;
	for(i=0;i<n;i++){
		soma += vec[i];
	}
	media = soma/n;
	printf("media: %d\n", media);

}

int main(){
	int vec[5];
	
	preenche(vec, 5);
	media(vec, 5);

	return 0;
}
