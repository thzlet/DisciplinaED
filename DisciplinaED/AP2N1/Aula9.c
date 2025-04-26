#include <stdio.h>

int eh_digito(char caracter); 
int eh_letra (char caracter);
char maiuscula (char caracter);

int main() { 
    // char cidade[] = {'A', 'r', 'a', 'c', 'a', 't', 'i', '\0'};
    char cidade[81] = "Aracati"; // cadeia de caracteres
    char nome[51] = "";
    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);
    printf("Digite sua cidade: ");
    printf("%[^\n]", cidade); // %s não  pega espaços
    printf("Sou %s e moro em %s\n", nome,  cidade);

    char c = 'z'; // usando tabela ascii
    printf("%d %c\n", c, c);

    if (eh_digito(c)) {
        printf("%c é um digito\n", c);
    } else {
        printf("%c não eh digito\n", c);
    }

    if (eh_letra(c)) {
        printf("eh letra\n");
    } else {
        printf("não eh letra\n");
    }

    return 0;
}

// funções
int eh_digito(char caracter) {
    return caracter >= 48 && caracter <= 57;
}

int eh_letra (char caracter) {
    return (caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122);
}

char maiuscula (char caracter) {
    if (caracter >= 'a' && caracter <= 'z') {
        caracter = caracter - 'a' + 'A';
    }
}