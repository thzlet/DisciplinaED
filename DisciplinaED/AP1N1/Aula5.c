#include <stdio.h>

//prototipo da função 
void fatorial(int n);

int main(int argc, char *argv[]) { // argc: contador de parametros
    printf("%d\n", argc); //argc aqui é o path do arquivo executável

    // listando os argumentos em argc
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]); // argv: valor de parametros (lista)
    }

    // chamando a funcao fatorial
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    fatorial(n);
    return 0;
}

// função Fatorial
void fatorial(int n) {
    int i;
    int f = 1;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    printf("Fatorial = %d", f);
}
