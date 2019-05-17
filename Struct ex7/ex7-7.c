/*
    Crie uma struct qualquer.
        Seja criativo!
    Crie uma função preenche que receba um ponteiro para uma variável da struct criada e leia os campos para a variável passada. Exemplo:

struct T t;
preenche(&t);
printf("A=%d, B=%d\n", t.a, t.b);
*/


#include <stdio.h>

struct Status{
	int atk, def, hp, xp;
};

void preenche(struct Status* p ){
	printf("Atk: "); scanf("%d", &p->atk);
	printf("\n");

	printf("Def: "); scanf("%d", &p->def);
	printf("\n");

	printf("HP: "); scanf("%d", &p->hp);
	printf("\n");

	printf("XP: "); scanf("%d", &p->xp);
	printf("\n");
}

int main(){
	struct Status p1;
	preenche(&p1);
	printf("Atk: %d Def: %d HP: %d EXP: %d\n", p1.atk, p1.def, p1.hp, p1.xp);


	return 0;
}
