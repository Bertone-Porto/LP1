/*ex5-3
ref. ex5-2.c
agora o casal tem uma lista de compras a efetuar:
int compras[] = {100, 50, 80, 30, 20};
faca um programa que leia o saldo das duas contas e efetue as compras
corretamente, sempre usando a conta com o maior saldo
a cada compra, o pragama deve exibir os saldos da duas contas
*/

#include <stdio.h>

void compra(int* conta, int valor){
	*conta -= valor;
}


int main(){
	int compras[] = {100, 50, 80, 30, 20};
	int conta1, conta2, i;
	int* p;
	
	printf("saldo conta1: \n"); scanf("%d", &conta1);
	printf("saldo conta2: \n"); scanf("%d", &conta2);
	
	for(i=0;i<5;i++){

		if(conta1 > conta2){
			p = &conta1;
			compra(p, compras[i]);
			printf("saldo conta1: %d, saldo conta2: %d\n", conta1, conta2);
		} else{
			p = &conta2;
			compra(p, compras[i]);
			printf("saldo conta1: %d, saldo conta2: %d\n", conta1, conta2);
		}

	}
	

	return 0;
}
