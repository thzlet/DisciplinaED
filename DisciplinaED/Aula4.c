#include <stdio.h>

int main () {

    // USO DO BREAK
    int numeros[] = {1, 5, 6, 8, 3, 9, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int busca = 9;
    int encontrado = 0;

    for (int i = 0; i < tamanho; i++) {
        if(numeros[i] == busca) {
            printf("Número encontrado!\n\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Numero não encontrado!\n\n");
    }
  
    // USANDO DO-WHILE
    char opcao = 'i';

    do {
        printf("Você quer prosseguir? (S/N)?");
        scanf("%c%*c", &opcao);
    } while (opcao != 's' && opcao != 'S' && opcao != 'n' && opcao != 'N');

    printf("O usuario decidiu  ");

    if (opcao == 's' || opcao == 'S') 
        printf("prosseguir...\n");
    else
        if (opcao == 'n' || opcao == 'N') 
            printf("finalizar o programa...\n");
        else 
            printf("Não entendi!");

    // USANDO SWITCH 
    switch(opcao) { // recebe variável em char ou int
        case 's': //nao tem case || break, segue pro próximo 
        case 'S': 
            printf("Prosseguir");
            break;
        case 'n':
        case 'N':
            printf("Finalizar");
            break;
        default:
            printf("Não entendi");
        
    }
    
    // FATORIAL DE UM NÚMERO
    int num = 0, i = 0, fat = 1;

    printf("\n\nDigite um número: ");
    scanf("%d", &num);

    for (i = num; 1 < i; i--) {
        fat *= i;
    }

    printf("O fatorial é %d", fat);

    return 0;
}
