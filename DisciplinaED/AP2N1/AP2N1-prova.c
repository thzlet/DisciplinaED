#include <stdio.h>
#include <stdlib.h>

// correção da segunda avaliação parcial 
float** cria_matriz(int n_linhas, int n_colunas);
int conta_num_em_mat(float** mat, int lin, int col, float num);

int main() {

    // ...

    return 0;
}

// questão 2
float** cria_matriz(int lin, int col) {
    float** matriz = (float**) malloc(lin * sizeof(float*));
    if (matriz == NULL) return NULL;

    for (int i = 0; i < lin; i++) {
        matriz[i] = (float*) malloc(col * sizeof(float));
    }

    for(int i = 0; i < n_lin; i++) {
        for(int j = 0; j < col; j++) {
            m[i][j] = i + j + 1;
        }
    }
    return matriz;
}

int conta_num_em_mat(float** mat, int lin, int col, float num) {
    int count = 0;
    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < col; j++) {
            if (mat[i][j] == num) {
                count++;
            }
        }
    }
    return count;
}

// questão 3
char* uppercase_copy(char* string) {
    if (string == NULL) return NULL;

    int len = 0;
    while (string[len] != '\0') {
        len++;
    }

    char* nova = (char*) malloc((len + 1) * sizeof(char));
    if (nova == NULL) return NULL;

    for (int i = 0; i < len; i++) {
        char c = string[i];
        if (c >= 'a' && c <= 'z') {
            nova[i] = c - ('a' - 'A');  // ou c - 32
        } else {
            nova[i] = c;
        }
    }

    nova[len] = '\0';  
    return nova;
}

