/*ex5-2
uma conta eh representada por um inteiro que guarda o saldo total: 
int minha_conta;
uma compra na internet eh efetuada por uma chamada compra(conta, valor). A funcao recebe um ponteiro para uma conta e um valor a ser debitado:
void compra(int* conta, int valor)
um casal tem duas contas e quer usar a conta com maior saldo para fazer uma compra de 500 reais
faca um programa que leia o saldo dasduas contas e efetua a compra corretamente. Ao final, o programa deve exibir os saldos das duas contas
*/

#include <stdio.h>

void compra(int* conta, int valor){
	*conta -= valor;
}


int main(){
	int minha_conta;
	int conta1, conta2;
	int* p;
	
	printf("saldo conta1: \n"); scanf("%d", &conta1);
	printf("saldo conta2: \n"); scanf("%d", &conta2);
	
	if(conta1 > conta2){
		p = &conta1;
	} else{
		p = &conta2;
	}

	compra(p, 500);

	printf("saldo conta1: %d, saldo conta2: %d\n", conta1, conta2);

	return 0;
}
