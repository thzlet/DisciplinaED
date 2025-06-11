#include "TAD_PONTO\TAD_PONTO.h"
#include <stdio.h>


int main(){

    Ponto* p1 = pto_cria(1.0, 2.0);

    printf("\n(%.2f, %.2f)\n", p1->x, p1->y);
    
    return 0;
}