#include <stdio.h>

void string_oposta(char* str) {
    int i = 0;
    while (str[i] != '\0') {
        char c = str[i];
        if (c >= 'a' && c <= 'z') {
            str[i] = 'a' + ('z' - c); // ou: str[i] = 219 - c;
        } else if (c >= 'A' && c <= 'Z') {
            str[i] = 'A' + ('Z' - c); // ou: str[i] = 155 - c;
        }
        i++;
    }
}

int main() {
    char texto[] = "Casa Legal";
    string_oposta(texto);
    printf("String oposta: %s\n", texto);
    return 0;
}
