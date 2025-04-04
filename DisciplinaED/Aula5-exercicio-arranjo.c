#include <stdio.h>
#include <stdlib.h>

// Protótipo da função / Assinatura da Função
int fatorial(int n);
int arranjo(int n, int p);

int main(int qtd_parametros, char *parametros[]){
    
    int n=0, p=0;
    
    switch(qtd_parametros){
        case 1:
            printf("\nDigite n: ");
            scanf("%d%*c", &n);
            printf("\nDigite p: ");
            scanf("%d%*c", &p);
            printf("\n O arranjo de %d tomados %d a %d é %d\n", n,p,p, arranjo(n,p));
            break;
        case 2:
            n = atoi(parametros[1]);
            printf("\nDigite p: ");
            scanf("%d%*c", &p);
            printf("\n O arranjo de %d tomados %d a %d é %d\n", n,p,p, arranjo(n,p));
        break;
        case 3:
            n = atoi(parametros[1]);
            p = atoi(parametros[2]);
            printf("\n O arranjo de %d tomados %d a %d é %d\n", n,p,p, arranjo(n,p));
        break;
        default:
            printf("A quantidade de parâmetros não é adequada para calcular arranjo...\n");
    }
    
    return 0;
}

// Implementação das outras Funções
int fatorial(int n){

    int resultado = 1;
    for(int i = 2; i<= n; i++)
        resultado*=i;

    return resultado;
}

int arranjo(int n, int p){
    return fatorial(n)/fatorial(n-p);
}
