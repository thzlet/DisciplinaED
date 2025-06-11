
#include "TAD_PONTO.h"

#include <stdlib.h>

/* Função Cria
** Aloca e retorna um ponto com coordenadas (x, y).
*/

Ponto* pto_cria(float x, float y){
    Ponto* novo_ponto = (Ponto*)malloc(sizeof(Ponto));
    novo_ponto->x = x;
    novo_ponto->y = y;

    return novo_ponto;
}