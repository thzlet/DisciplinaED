#include <stdio.h>
#include <string.h>

void roda_string(char* str) {
    int len = strlen(str);
    if (len <= 1) return; // Se a string tiver 0 ou 1 caractere, não faz nada

    char ultimo = str[len - 1]; // Guarda o último caractere

    // Desloca todos os caracteres uma posição para a direita
    for (int i = len - 1; i > 0; i--) {
        str[i] = str[i - 1];
    }

    str[0] = ultimo; // Coloca o último caractere na primeira posição
}

int main() {
    char texto[] = "casa";
    roda_string(texto);
    printf("String rodada: %s\n", texto);
    return 0;
}
