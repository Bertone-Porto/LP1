/*
   9- Um jogo possui 10 personagens, cada um com as seguintes características:
        Um número que representa a sua "identidade".
        Um posição (x,y) no espaço bi-dimensional.
        Uma quantidade de pontuação (inicialmente 0).
    	Crie uma struct para representar um personagem.
        A posição também deve ser uma struct.
    	Crie um vetor com 10 personagens.

   10-  Crie uma função que leia um personagem (use a struct do exercício anterior).
		A função deve usar uma função que lê a posição.
		Crie um loop para ler todos os 10 personagens
		Desenhe um mapa do jogo. 
*/



#include <stdio.h>

#define L 10
#define C 10

struct Posicao{
	int x, y;
};

struct Personagem{
	int id;
	struct Posicao pos;
	int pontuacao;
};

void preenche_posicao(struct Posicao* ps){
	printf("Posicao x: \n");
	scanf("%d", &ps->x);
	printf("Posicao y: \n");
	scanf("%d", &ps->y);

}

void preenche(struct Personagem* px){
	printf("Id do personagem: \n");
	scanf("%d", &px->id);
	preenche_posicao(&px->pos);
	px->pontuacao = 0;

}

void mapa(int mat[L][C]){
	int i, j;
	printf("  ");
	for (j=1; j<=C; j++) {
		printf("%d ", j);
	}
	printf("\n");
	for (i=1; i<=L; i++) {
		printf("%d ", i);
		for (j=1; j<=C; j++) {
			if (mat[i][j] == 0) {
				printf("  ");
			}
			else {
				printf("%d ", mat[i][j]);
			}
		}
		printf("\n");
	}
}

int main(){
	int mat[L][C] = {
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }
	};

	struct Personagem p[10];
	int i, j;
	
	for(i=0;i<10;i++){
		preenche(&p[i]);
		mat[p[i].pos.x][p[i].pos.y] = p[i].id;
	}
	
	mapa(mat);

	return 0;
}
