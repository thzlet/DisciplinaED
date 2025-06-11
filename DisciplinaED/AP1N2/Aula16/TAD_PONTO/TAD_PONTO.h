#ifndef __TAD_PONTO__ 
    #define __TAD_PONTO__ 

    /* Estrutura exportada */
    struct ponto
    {
        float x;
        float y;
    };

    /* Tipo exportado */
    typedef struct ponto Ponto;

    /* FUNÇÕES EXPORTADAS */

    /* Função Cria
    ** Aloca e retorna um ponto com coordenadas (x, y).
    */
    Ponto* pto_cria(float x, float y);
    

    #include "TAD_PONTO.c"
#endif