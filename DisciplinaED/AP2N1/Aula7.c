#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    float* vetor = (float*)malloc(tamanho * sizeof(float)); // alocando memoria para o vetor

    if (vetor == NULL) { // retornando null se nao houver espaço para alocar
        printf("Erro na alocação de memória.\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) { // usuariio dando entrada nos valores de cada posicao
        printf("Digite o valor para a posição %d: ", i);
        scanf("%f", &vetor[i]);
    }

    printf("\nValores armazenados no vetor:\n"); // exibindo valores
    for (int i = 0; i < tamanho; i++) {
        printf("vetor[%d] = %.2f\n", i, vetor[i]);
    }

    free(vetor); // liberando memoria

    return 0;
}
