#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

// protótipos das funções
Ponto* criar_ponto();
void ler_ponto(Ponto* p); 
void imprime_ponto(Ponto* p);

int main(void) {
    Ponto* p1 = criar_ponto();
    Ponto* p2 = criar_ponto();

    ler_ponto(p1);
    imprime_ponto(p1); 

    ler_ponto(p2);
    imprime_ponto(p2);

    free(p1);
    free(p2);
    return 0;
}

Ponto* criar_ponto() {
    Ponto* p = (Ponto*)malloc(sizeof(Ponto));
    if (!p) {
        printf("Memória insuficiente...\n");
        exit(1);
    }
    return p; 
}

void ler_ponto(Ponto* p) {
    printf("Digite as coordenadas (x, y): ");
    scanf("%f %f%*c", &p->x, &p->y);
}

void imprime_ponto(Ponto* p) {
    printf("O ponto fornecido foi: (%.2f, %.2f)\n", p->x, p->y); 
}