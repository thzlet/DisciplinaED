#include <stdio.h>
#include <stdlib.h>

// protótipos das funções
float** cria_matriz(int n_linhas, int n_colunas);
void libera_matriz(float** matriz, int n_linhas, int n_colunas);
void imprime_matriz(float** matriz, int n_linhas, int n_colunas);
float** transpor_matriz(float** matriz, int n_linhas, int n_colunas);
float** soma_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
float** sub_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);
float** mult_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b);

// função principal
int main() {
    int linhas = 2, colunas = 3;

    // criando matrizes
    float** matriz_a = cria_matriz(linhas, colunas);
    float** matriz_b = cria_matriz(linhas, colunas);

    if (matriz_a == NULL || matriz_b == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // inicializando matriz a
    printf("Matriz A:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz_a[i][j] = i + j + 1;  // só para preencher
            printf("%.2f ", matriz_a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // inicializando matriz b
    printf("Matriz B:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz_b[i][j] = (i + 1) * (j + 2);  // só para preencher diferente
            printf("%.2f ", matriz_b[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    // somando matrizes a e b
    printf("Soma:\n");
    float** soma = soma_matriz(matriz_a, linhas, colunas, matriz_b, linhas, colunas);
    if (soma != NULL) {
        imprime_matriz(soma, linhas, colunas);
        libera_matriz(soma, linhas, colunas);
    } else {
        printf("Não foi possível somar as matrizes.\n");
    }

    printf("\n");

    // subtraindo matrizes a e b
    printf("Subtração:\n");
    float** sub = sub_matriz(matriz_a, linhas, colunas, matriz_b, linhas, colunas);
    if (sub != NULL) {
        imprime_matriz(sub, linhas, colunas);
        libera_matriz(sub, linhas, colunas);
    } else {
        printf("Não foi possível subtrair as matrizes.\n");
    }

    printf("\n");

    // matriz transposta
    printf("Transposta de A:\n");
    float** transposta = transpor_matriz(matriz_a, linhas, colunas);
    if (transposta != NULL) {
        imprime_matriz(transposta, colunas, linhas);
        libera_matriz(transposta, colunas, linhas);
    } else {
        printf("Não foi possível transpor a matriz.\n");
    }

    printf("\n");

    // multiplicando matrizes
    printf("Multiplicação (A x Transposta de B):\n");
    float** transposta_b = transpor_matriz(matriz_b, linhas, colunas);
    if (transposta_b != NULL) {
        float** mult = mult_matriz(matriz_a, linhas, colunas, transposta_b, colunas, linhas);
        if (mult != NULL) {
            imprime_matriz(mult, linhas, linhas);
            libera_matriz(mult, linhas, linhas);
        } else {
            printf("Não foi possível multiplicar as matrizes.\n");
        }
        libera_matriz(transposta_b, colunas, linhas);
    }

    libera_matriz(matriz_a, linhas, colunas);
    libera_matriz(matriz_b, linhas, colunas);

    return 0;
}

// implementando as funções
float** cria_matriz(int n_linhas, int n_colunas) {
    float** matriz = (float**) malloc(n_linhas * sizeof(float*));
    if (matriz == NULL) return NULL;

    for (int i = 0; i < n_linhas; i++) {
        matriz[i] = (float*) malloc(n_colunas * sizeof(float));
        if (matriz[i] == NULL) {
            for (int j = 0; j < i; j++) free(matriz[j]);
            free(matriz); // liberando em caso de erro
            return NULL;
        }
    }
    return matriz;
}

void libera_matriz(float** matriz, int n_linhas, int n_colunas) {
    (void)n_colunas; 
    for (int i = 0; i < n_linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);
}

void imprime_matriz(float** matriz, int n_linhas, int n_colunas) {
    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            printf("%.2f ", matriz[i][j]);
        }
        printf("\n");
    }
}

float** transpor_matriz(float** matriz, int n_linhas, int n_colunas) {
    float** transposta = cria_matriz(n_colunas, n_linhas);
    if (transposta == NULL) return NULL;

    for (int i = 0; i < n_linhas; i++) {
        for (int j = 0; j < n_colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }
    return transposta;
}

float** soma_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b) {
    if (linhas_a != linhas_b || colunas_a != colunas_b) return NULL;

    float** resultado = cria_matriz(linhas_a, colunas_a);
    if (resultado == NULL) return NULL;

    for (int i = 0; i < linhas_a; i++) {
        for (int j = 0; j < colunas_a; j++) {
            resultado[i][j] = matriz_a[i][j] + matriz_b[i][j];
        }
    }
    return resultado;
}

float** sub_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b) {
    if (linhas_a != linhas_b || colunas_a != colunas_b) return NULL;

    float** resultado = cria_matriz(linhas_a, colunas_a);
    if (resultado == NULL) return NULL;

    for (int i = 0; i < linhas_a; i++) {
        for (int j = 0; j < colunas_a; j++) {
            resultado[i][j] = matriz_a[i][j] - matriz_b[i][j];
        }
    }
    return resultado;
}

float** mult_matriz(float** matriz_a, int linhas_a, int colunas_a, float** matriz_b, int linhas_b, int colunas_b) {
    if (colunas_a != linhas_b) return NULL;

    float** resultado = cria_matriz(linhas_a, colunas_b);
    if (resultado == NULL) return NULL;

    for (int i = 0; i < linhas_a; i++) {
        for (int j = 0; j < colunas_b; j++) {
            resultado[i][j] = 0.0;
            for (int k = 0; k < colunas_a; k++) {
                resultado[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
    return resultado;
}
