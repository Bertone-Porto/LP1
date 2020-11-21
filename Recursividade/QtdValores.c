/*falta alguns ajustes*/

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int QtdValores(struct Caixa* L){
    if(L == NULL){
        return 0;
    } else{
        return QtdValores(L->prox) + 1;
    }
}


int main () {
    struct Caixa c4 = { 5, NULL };
    struct Caixa c3 = { 7, &c4 };
    struct Caixa c2 = { 9, &c3 };
    struct Caixa c1 = { 3, &c2 };
    struct Caixa c0 = { 1, &c1 };
    
    printf("%d\n", QtdValores(&c0));
    
}
