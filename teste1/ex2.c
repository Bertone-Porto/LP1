#include <stdio.h>

int main(){
	int n1, n2, i;

	printf("digite n1: "); scanf("%d", &n1);
	printf("\n");
	printf("digite n2: "); scanf("%d", &n2);
	printf("\n");

	if(n1>n2){
		while(n1>=n2){
			if(n1 % 2 == 0){
				printf("%d \n", n1);
			}
		n1 -= 1;
		}

	} else {
		while(n2>=n1){
			if(n2 % 2 == 0){
				printf("%d \n", n2);
			}
		n2 -= 1;
		}
	}	


	return 0;
}
