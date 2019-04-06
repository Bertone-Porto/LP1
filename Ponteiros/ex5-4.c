/*ex5-4
criar uma funcao troca que recebe dois ponteiros para inteiros p1 e
p2 e troque os conteudos por eles apontados:

int x=10, y=20;
troca(&x, &y); //definir essa funcao
printf("%d %d\n", x, y); //20 10
*/

#include <stdio.h>
void troca (int* x, int* y) {
	int aux = *x;
	*x = *y;
	*y = aux;  
}



int main(){
	int x=10, y=20;
	troca(&x, &y); 
	printf("%d %d\n", x, y); 

	return 0;
}
