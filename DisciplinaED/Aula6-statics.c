#include <stdio.h>
#include <stdlib.h> // importando stdlib pra usar rand

void imprime(float a);

int main(void) {
    for (int i = 0; i <10; i++) {
        imprime((float)rand()); // casting da função rand

        if ((i + 1) % 5 == 0) { // i + 1 pra saber quantas vezes o loop passou 
            printf("\n"); // se o resto da divisao por 5 for 0, quebra linha
        }
        
    }

    return 0;
}

void imprime(float a) {
    static int cont = 0; // variavel não vai para a pilha de execução
    printf("%d : %.2f ", cont, a);
    cont++;
}
