#include <stdio.h>

typedef struct ponto{
    float x;
    float y;
} Ponto;

float area(int n, Ponto* vetor_pontos);

int main(){
    Ponto figura_quadrada[4] = {{0.0,0.0}, {1.0,0.0}, {1.0, 1.0}, {0.0, 1.0}};

    printf("Área: %.2f m^2", area(4, figura_quadrada));

    return 0;
}

float area(int n, Ponto* vetor_pontos){
    float area = 0.0;
    int i,j;

    for(i = 0; i < n; i++){
        j = (i + 1) % n;
        area += (vetor_pontos[j].x - vetor_pontos[i].x) * (vetor_pontos[i].y + vetor_pontos[j].y)/2;
    }

    return area > 0.0 ? area : -area;
}