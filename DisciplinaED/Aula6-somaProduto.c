#include <stdio.h>

void somaProduto(int a, int b, int *c, int *d);
// ponteiro de variável
int main(void) {
    int s, p;

    somaProduto(4,3,&s,&p); //&s = *c | &p = *d
    printf("Soma: %d | Produto: %d", s, p);

    return 0;
}

void somaProduto(int a, int b, int *c, int *d) { // a memória eh desalocada depois da exeecução
    *c = a+b; // *c aponta para o endereçoo de s
    *d = a*b; // *d aponta para o endereço de p
}
