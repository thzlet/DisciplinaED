#include <stdio.h>
#include <string.h>

//  manipulação de cadeias de caracteres (página 90)
int compara(char* s1, char* s2) { // comparação de strings
    int i;
    for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] < s2[i]) {
            return -1; // -1: primeira string é menor que a segunda
        } else if (s1[i] > s2[i]) {
            return 1; //1: primeira string maior que a segunda
        }
    }
    if (s1[i] == s2[i]) {
        return 0; // 0: strings iguais
    } else if (s2[i] != '\0') {
        return -1;
    } else {
        return 1;
    }
}

char* duplica(char* s) { // duplica string
    int n = strlen(s); // quantidade de caracteres
    char* d = (char*) malloc ((n+1)*sizeof(char)); // n+1 = n+\0
    strcpy(d,s);
    return d; // d é a string destino
}

int main() {
    // exemplo 1
    char str1[100], str2[100];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    int resultado = compara(str1, str2);

    if (resultado == 0) {
        printf("As strings são iguais.\n");
    } else if (resultado < 0) {
        printf("A primeira string é menor que a segunda.\n");
    } else {
        printf("A primeira string é maior que a segunda.\n");
    }

    // exemplo 2
    char entrada[100];

    printf("Digite uma string: ");
    if (fgets(entrada, sizeof(entrada), stdin) == NULL) {
        printf("Erro ao ler a string.\n");
        return 1;
    }

    // Remove o \n se existir
    size_t len = strlen(entrada);
    if (len > 0 && entrada[len - 1] == '\n') {
        entrada[len - 1] = '\0';
    }

    // Verifica se a string está vazia
    if (strlen(entrada) == 0) {
        printf("Nenhuma string foi digitada para copiar.\n");
        return 1;
    }

    // Duplica a string
    char* copia = duplica(entrada);

    // Exibe original e cópia
    printf("String original: %s\n", entrada);
    printf("String duplicada: %s\n", copia);

    // Libera memória alocada
    free(copia);

    return 0;
}
