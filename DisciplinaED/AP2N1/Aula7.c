#include <stdio.h>
#include <stdlib.h>

float media(int n, float* v); /// prototipo da funçao media

int main(void) {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float* vetor = (float*)malloc(tamanho * sizeof(float)); // alocando memoria para o vetor

    if (vetor == NULL) {
        printf("Erro na alocação de memória.\n"); // retornando null se nao houver espaço para a alocar
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor para a posição %d: ", i); // preenchendo o vetor
        scanf("%f", &vetor[i]);
    }

    printf("\nValores armazenados no vetor:\n"); // exibindo valores
    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %.2f\n", i, vetor[i]);
    }

    float m = media(tamanho, vetor); // calculando a media
    printf("\nA média dos valores é: %.2f\n", m);

    free(vetor); // liberando a memoria

    return 0;
}

float media(int n, float* v) { // função que calcula media
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += v[i];
    }
    return soma / n;
}