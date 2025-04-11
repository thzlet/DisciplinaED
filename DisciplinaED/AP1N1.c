#include <stdio.h> 
//questão 2 - numero perfeito
int eh_numero_perfeito(int num);

//questão 3 - função swap
void swap(int*num1, int*num2);

//questão 3 - função sort
void sort(int* vetor, int n, char ordem);

int main() {

    int num = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(eh_numero_perfeito(num)) {
        printf("É numero perfeito");
    } else {
        printf("Não é número perfeito");
    }

    //teste questão 3
    int vetor[] = {10, 3, 7, 1, 9}; // inicializando um vetor qualquer
    int n = sizeof(vetor) / sizeof(vetor[0]); // tamanho do vetor

    sort(vetor, n, 'c'); //ordenando em ordem crescente
    printf("Crescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    sort(vetor, n, 'd'); // ordenando em ordem descrescente
    printf("Decrescente: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

int eh_numero_perfeito(int num) { // questão 2
    int soma_divisores = 0;

    for(int i = 1; i < num; i++) {
        if(num%i==0) {
            soma_divisores += i;
        }
    }
    if(soma_divisores == num) {
        return 1;
    } else {
        return 0;
    }
}

void swap(int* num1, int* num2) { // questão 3 - swap
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

// BUBBLE SORT : PERCORRE O VETOR - COMPARA PARES DE ELEMENTOS - IF FORA DE FORDEM : SWAP
void sort(int* vetor, int n, char ordem) { // questão 3 - sort
    int i, j;

    switch (ordem) {
        case 'c': // crescente
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (vetor[j] > vetor[j + 1]) {
                        swap(&vetor[j], &vetor[j + 1]);
                    }
                }
            }
            break;

        case 'd': // decrescente
            for (i = 0; i < n - 1; i++) {
                for (j = 0; j < n - i - 1; j++) {
                    if (vetor[j] < vetor[j + 1]) {
                        swap(&vetor[j], &vetor[j + 1]);
                    }
                }
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
    }
}