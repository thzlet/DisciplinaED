// exercicio 5.3
#include <stdio.h>
#include <ctype.h>

void minusculo(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        str[i] = tolower(str[i]); // converte o caractere para minúsculo
        i++;
    }
}

int main() {
    char texto[] = "EsTe eH Um TeXtO MiStUrAdO!";
    minusculo(texto);
    printf("Texto em minusculo: %s\n", texto);
    return 0;
}
