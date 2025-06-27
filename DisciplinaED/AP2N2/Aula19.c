#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista* prox;
};

typedef struct lista Lista;

Lista* lst_cria();
Lista* lst_insere(Lista* l, int i);
Lista* lst_insere_ordenado(Lista* l, int i);
Lista* lst_retira(Lista* l, int i);
void lst_imprime(Lista* l);
int lst_vazia(Lista* l);
void lst_libera(Lista* l);
Lista* lst_busca(Lista* l, int v);


int main(){
    
    Lista* minha_lista = lst_cria();

    minha_lista = lst_insere(minha_lista, 1);
    minha_lista = lst_insere(minha_lista, 2);
    minha_lista = lst_insere(minha_lista, 3);
    minha_lista = lst_insere(minha_lista, 4);
    minha_lista = lst_insere(minha_lista, 5);
    
    lst_imprime(minha_lista);

    printf("# Buscando na lista #\n");
    printf("Digite o valor a ser buscado: ");
    int valor_busca = 0;
    scanf("%d", &valor_busca);

    printf("Elemento ");
    
    if(lst_busca(minha_lista, valor_busca))
        printf("encontrado...\n");
    else
        printf("não encontrado...\n");

    lst_libera(minha_lista);

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

int lst_vazia(Lista* l){
    return l == NULL;
}

void lst_libera(Lista* l){
    Lista* p = l;

    while(p != NULL){
        Lista* t = p->prox;
        free(p);
        p = t;
    }
}


Lista* lst_busca(Lista* l, int v){

    for(Lista* p = l; p!= NULL; p = p->prox)
        if(p->info == v)
            return p;

    return NULL;
}

Lista* lst_retira(Lista* l, int i){
    Lista* ant = NULL;
    Lista* p = l;

}


Lista* lst_insere_ordenado(Lista* l, int i);