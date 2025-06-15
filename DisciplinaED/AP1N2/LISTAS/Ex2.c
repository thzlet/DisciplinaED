// exercicio 5.2
#include <stdio.h>

int conta_char(char* str, char c) {
    int count = 0;

    while (*str != '\0') {
        if (*str == c) {
            count++;
        }
        str++;
    }

    return count;
}

int main() {
    char texto[] = "banana";
    char caractere = 'a';

    int total = conta_char(texto, caractere);
    printf("O caractere '%c' aparece %d vezes.\n", caractere, total);

    return 0;
}
