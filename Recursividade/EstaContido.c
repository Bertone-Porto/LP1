/*falta alguns ajustes*/

#include <stdio.h>

struct Caixa {
    int valor;
    struct Caixa* prox;
};

int EstaContido(struct Caixa* L, int x){
    if(L == NULL){
        return 0;
    } else{
        if(L->valor == x){
            return 1;
        } else{
            return EstaContido(L->prox, x);
        }
    }  
}

int main () {
    struct Caixa c4 = { 5, NULL };
    struct Caixa c3 = { 7, &c4 };
    struct Caixa c2 = { 9, &c3 };
    struct Caixa c1 = { 3, &c2 };
    struct Caixa c0 = { 1, &c1 };
    
    if(EstaContido(&c0, 2)){
        printf("esta contido\n");
    } else{
        printf("nao esta contido\n");
    }
    
}
