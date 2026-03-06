#include <stdio.h>

int main() {
    float x, fx;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    if (x == 2) {
        printf("Erro: O denominador nao pode ser zero (x nao pode ser 2).\n");
    } else {
        fx = 8 / (2 - x);
        printf("O valor de f(x) e: %.2f\n", fx);
    }

    return 0;
}