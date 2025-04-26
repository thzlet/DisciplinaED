#include <stdio.h>
#define N_LINHAS 4
#define M_COLUNAS 4


int main() {

    printf("%d", sizeof(float*));

    float** mat = (float**)malloc(N_LINHAS*sizeof(float*)); //ponteiro de ponteiro 
    
    if(!mat) { //null = false 
        printf("Erro ao alocar matriz!\n");
        exit(1);
    }

    for (int i = 0; i < N_LINHAS; i++) {
        mat[i] = (float**)malloc(M_COLUNAS*sizeof(float)); // alocando colunas

        if(!mat[i]) {
            printf("Erro ao alocar colunas da matriz!\n");
            exit(1);
        }
    }

    for(int i = 0; i < N_LINHAS; i++) {
        for(int j = 0; j < M_COLUNAS; j++) {
            mat[i][j] = i*M_COLUNAS + j + 1;
        }
    }

    printf("Imprimindo matiz:\n");

    for(int i = 0; i < N_LINHAS; i++) {
        for(int j = 0; j < M_COLUNAS; j++) {
            printf("%10.2f", mat[i][j]);
        } printf("\n");
    }
    return 0;
}