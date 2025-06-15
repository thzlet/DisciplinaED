// exercicio 5.1 - cadeia de caracteres

#include <stdio.h>

int conta_vogais(char* str) {
    int count = 0;
    char c;

    while (*str != '\0') {
        c = *str;
        // Verifica se é uma vogal (maiúscula ou minúscula)
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char texto[] = "Exemplo de String";
    int total = conta_vogais(texto);
    printf("Número de vogais: %d\n", total);
    return 0;
}


