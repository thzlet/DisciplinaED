#include <stdio.h>
#include <stdbool.h>

// EXERCÍCIO: verificando se um número é primo
bool ehPrimo(int num) {
    if (num <= 1) { // numeros menores ou iguais a 1
        return false; 
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // se tem divisor, não é primo
        }
    }
    return true; // se houverem divisores
}

int main() {
    int vetor[] = {12, 3, 5, 8, 7, 6, 16}; 
    int tamanho = sizeof(vetor) / sizeof(vetor[0]); 
    int soma = 0; // variavel que vai armazenar a soma dos primos

    for (int i = 0; i < tamanho; i++) {
        if (ehPrimo(vetor[i])) {
            soma += vetor[i];
        }
    }

    return 0;
}