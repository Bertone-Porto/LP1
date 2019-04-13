#include <stdio.h>

void preenche(int arr[4][2], int l, int c){ //preenche o array arr
	int i, j;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			printf("linha: \n");
			scanf("%d", &arr[i][j]);
		}
	}
}

void media(int arr[4][2], int l, int c){ //calcula a media dos elementos do arr
	int i, j, media, soma=0;
	for(i=0;i<l;i++){
		for(j=0;j<c;j++){
			soma += arr[i][j];
		}
	}
	media = soma/(l*c);
	printf("media: %d\n", media);
}


int main(){
	int arr[4][2];
	preenche(arr, 4, 2);
	media(arr, 4, 2);
	return 0;
}
