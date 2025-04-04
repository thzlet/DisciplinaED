#include <stdio.h>

int s, p; // s e p como variaveis globais

void somaProduto(int a, int b); // prototipo da função

int main(void) {

    somaProduto(4,3); 
    printf("Soma: %d | Produto: %d", s, p);

    return 0;
}

void somaProduto(int a, int b) { // manipulando a propria variavel
    s = a+b; 
    p = a*b; 
}
