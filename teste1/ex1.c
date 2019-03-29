#include <stdio.h>

int main(){

	int num, soma = 0;
	printf("Digite um  numero: \n");
	scanf("%d", &num);
	
	while(num>0){
		soma += num;
		num -= 1;
	}
	printf("Somou %d \n", soma);

	return 0;
}
