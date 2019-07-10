#include <stdio.h>
#include <string.h>

enum Sub{PROF=0, ALUNO=1};

struct Pessoa{
  char nome[25];
  int idade;
};

struct Prof{
  struct Pessoa pessoa;
  char inst[5];
};

struct Aluno{
  struct Pessoa pessoa;
  int cr;
};

struct Membro{
  enum Sub sub;
  union {
    struct Prof* prof;
    struct Aluno* aluno;
  }x;
};

void preenche_pessoa(struct Pessoa* pessoa){
  printf("nome: ");
  scanf("%s", pessoa->nome);
  printf("idade: ");
  scanf("%d", &pessoa->idade);
}

void preenche_prof(struct Prof* prof){
  preenche_pessoa(&prof->pessoa);
  printf("Unidade: ");
  scanf("%s", prof->inst);
}

void preenche_aluno(struct Aluno* aluno){
  preenche_pessoa(&aluno->pessoa);
  printf("CR: ");
  scanf("%d", &aluno->cr);
}

void preenche(struct Membro* m){
  switch(m->sub){
    case PROF:
      preenche_prof(m->x.prof);
      break;
    case ALUNO:
      preenche_aluno(m->x.aluno);
      break;
    default:
      printf("ERROR\n");
      break;
  }

}

int main(void) {
  struct Membro membro;
  membro.sub = ALUNO;
  preenche(&membro);
  printf("%s %d %d\n", membro.x.aluno->pessoa.nome, membro.x.aluno->pessoa.idade, membro.x.aluno->cr);
  
  return 0;
}
