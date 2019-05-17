#include <stdio.h>

struct Personagem{
	int forca;
	int energia;
	int experiencia;
};

struct Personagem preencheA(){
	struct Personagem P;

	printf("forca: \n");
	scanf("%d", &P.forca);
	printf("energia: \n");
	scanf("%d", &P.energia);
	printf("experiencia: \n");
	scanf("%d", &P.experiencia);
	printf("\n\n");

	return(P);

}


int main(){
	struct Personagem p1 = preencheA();
	struct Personagem p2 = preencheA();

	printf("(%d,%d,%d) vs (%d,%d,%d)\n",
           p1.forca, p1.energia, p1.experiencia,
           p2.forca, p2.energia, p2.experiencia);

	return 0;
}
