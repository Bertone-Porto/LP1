/*ex5-1
ler dois int a e b
exibir os valores de a e b
criar um ponteiro p p/ a variavel com maior valor
atraves de p, subtrair 50 da variavel com maior valor
exibir os valores de a e b
*/

#include <stdio.h>

int main(){
	int a, b;
	int* p;
	printf("digite: \n"); scanf("%d", &a);
	printf("digite: \n"); scanf("%d", &b);

	printf("%d %d\n", a, b);

	if(a>b){
		p = &a;
	} else{
		p = &b;
	}

	*p -= 50;
	printf("%d %d\n", a, b);

	return 0;
}
