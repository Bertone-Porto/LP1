/*
    Declare uma struct para representar as características/propriedades de um atleta do seu esporte favorito.
    Crie uma função que exiba as propriedades de maneira bem organizada e formatada.
    Crie três exemplos de atletas variando as propriedades e teste a função de exibição.
*/

#include <stdio.h>
#include <string.h>

struct Dados{
	char nome[15];
	int pac, sho, pas, dri, def, phy; //sistema parecido com o jogo FIFA
};

void exibe(struct Dados* p){
	printf("***********************\n");
	printf("%s\n", p->nome);	
	printf("***********************\n");
	printf("** PAC %d  |  DRI %d **\n", p->pac, p->dri);
	printf("** SHO %d  |  DEF %d **\n", p->sho, p->def);
	printf("** PAS %d  |  PHY %d **\n", p->pas, p->phy);
	printf("***********************\n\n\n");
}


int main(){
	struct Dados p1 = {"Vini Jr", 93, 72, 64, 81, 29, 60};
	exibe(&p1);

	struct Dados p2 = {"Ronaldinho", 95, 93, 92, 99, 38, 83};
	exibe(&p2);

	struct Dados p3 = {"Johan Cruyff", 92, 93, 93, 99, 43, 75};
	exibe(&p3);

	return 0;
}

