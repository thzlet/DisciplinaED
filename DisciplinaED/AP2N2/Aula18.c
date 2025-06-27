#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* lst_cria();
Lista* lst_insere(Lista* l, int i);
void lst_imprime(Lista* l);

int main(){
    
    Lista* minha_lista = lst_cria();

    minha_lista = lst_insere(minha_lista, 1);
    minha_lista = lst_insere(minha_lista, 2);
    minha_lista = lst_insere(minha_lista, 3);
    minha_lista = lst_insere(minha_lista, 4);
    minha_lista = lst_insere(minha_lista, 5);
    
    lst_imprime(minha_lista);


    return 0;
}

Lista* lst_cria(){
    return NULL;
}

Lista* lst_insere(Lista* l, int i){
    Lista* novo = (Lista*)malloc(sizeof(Lista));
    
    if(!novo){
        printf("Não foi possível inserir novo elmento...");
        exit(1);
    }

    novo->info = i;
    novo->prox = l;

    return novo;
}

void lst_imprime(Lista* l){
    Lista* p;

    for(p = l; p != NULL; p = p->prox)
        printf("info: %d\n", p->info);
}