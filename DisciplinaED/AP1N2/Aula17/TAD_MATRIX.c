#include "TAD_MATRIX.h"
#include <stdlib.h>

/* Função Cria
** Aloca e retorna um matriz com linhas e colunas.
*/
Matrix* mat_create(int lines, int columns){

    Matrix* mat = (Matrix*)malloc(sizeof(Matrix));
    if(!mat){
        printf("\nNão temos memória suficiente para alocar a matriz...\n");
        exit(1);
    }

    mat->lines = lines;
    mat->columns = columns;

    mat->values = (float**)malloc(lines * sizeof(float*));

    for(int i=0; i<lines; i++){
        mat->values[i] = (float*)malloc(columns * sizeof(float));
        
        if(!mat->values[i]){
            printf("\nNão temos memória suficiente para alocar a matriz...\n");
            exit(1);
        }
        
        for(int j = 0; j < columns; j++)
            mat->values[i][j] = 0.0;
    }

        return mat;
}

/* Função FREE MATRIX
** Libera uma matrix previamente alocada.
*/
void mat_free(Matrix* mat);

/* Função READ MATRIX
** Retorna o valor guardado na posição designada por
** linha e colunas.
*/
float mat_read(Matrix* mat, int line, int column);

/* Função UPDATE MATRIX
** Atualiza o valor guardado na posição designada pelos índices
** da linha e coluna. 
*/
void mat_update(Matrix* mat, int id_line, int id_column, float value){
    
    if(!(0 <= id_line && id_line < mat->lines)){
        printf("A matriz não tem %d linhas", id_line + 1);
        exit(1);
    }

    if(!(0 <= id_column && id_column < mat->columns)){
        printf("A matriz não tem %d colunas", id_column + 1);
        exit(1);
    }
    
    mat->values[id_line][id_column] = value;
}

/* Função LINES IN MATRIX
** Retorna o a quantidade de linhas da
** matriz.
*/
int mat_lines(Matrix* mat);

/* Função COLUMNS IN MATRIX
** Retorna o a quantidade de colunas da
** matriz.
*/
int mat_columns(Matrix* mat);

/* Função COPY MATRIX
** Retorna o uma cópia de uma
** matriz.
*/
Matrix* mat_cpy(Matrix* mat);

/* Função TRANSPOSES A MATRIX
** Transpõe uma matriz.
*/
void mat_transpose_in_place(Matrix* mat);

/* Função SUM TWO MATRIX IN PLACE
** Soma duas matrizes e põe o resultado
** na matriz A. 
*/
void mat_sum_in_place(Matrix* A, Matrix* B);

/* Função SUM TWO MATRIX
** Retorna uma nova matriz que é
** a soma das matrizes A e B.
*/
Matrix* mat_sum(Matrix* A, Matrix* B);

/* Função SUB TWO MATRIX
** Retorna uma nova matriz que é
** a subtração das matrizes A e B.
*/
Matrix* mat_sub(Matrix* A, Matrix* B);

/* Função MULTIPLY TWO MATRIX
** Retorna uma nova matriz que é
** a multiplicação das matrizes A e B.
*/
Matrix* mat_mul(Matrix* A, Matrix* B);