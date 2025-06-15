#ifndef __TAD_MATRIX__ 
    #define __TAD_MATRIX__ 

    /* Estrutura exportada */
    struct matrix
    {
        int lines;
        int columns;
        float** values;
    };

    /* Tipo exportado */
    typedef struct matrix Matrix;

    /* FUNÇÕES EXPORTADAS */

    /* Função Cria
    ** Aloca e retorna um matriz com linhas e colunas.
    */
    Matrix* mat_create(int lines, int columns);
    
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
    void mat_update(Matrix* mat, int id_line, int id_column, float value);

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

    #include "TAD_MATRIX.c"
#endif