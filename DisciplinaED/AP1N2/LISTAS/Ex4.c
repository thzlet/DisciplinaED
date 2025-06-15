#include <stdio.h>

void shift_string(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];

        if (c >= 'a' && c <= 'z') {
            // Se for 'z', volta para 'a'
            str[i] = (c == 'z') ? 'a' : c + 1;
        } else if (c >= 'A' && c <= 'Z') {
            // Se for 'Z', volta para 'A'
            str[i] = (c == 'Z') ? 'A' : c + 1;
        }
        // Outros caracteres (espaços, números, símbolos) permanecem inalterados
        i++;
    }
}

int main() {
    char texto[] = "Abcz Zyx!";
    shift_string(texto);
    printf("String modificada: %s\n", texto);
    return 0;
}
