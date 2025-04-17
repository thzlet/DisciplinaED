#include <stdio.h>
// #define f(x) x*x + x + 1; // macro
// #define maior(a,b) ((a) > (b)?(a):(b))
int fatorial(int n);

int main(void) {
    int num = 0;
    printf("Digite um numero: ");
    scanf("%d%*c", &num);
    printf("%d! = %d", num, fatorial(num));

    // printf("f(%f) = %f", num, f(num));
    // printf("Maior: %.2f", maior(a,b));
    return 0;
}

int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n*fatorial(n-1); // testando função recursiva
    }
}
