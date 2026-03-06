# include <stdio.h>
# include <math.h>
int main () {
    // declaração de variaveis

    float A;
    float B;
    float C;

    //entrada de dados
    
    printf("digite o valor de A: ");
    scanf("%f", &A);
    printf("digite o valor de B: ");
    scanf("%f", &B);
    printf("digite o valor de C: ");
    scanf("%f", &C);

    // processamento

    float Delta = (B * B) - (4 * A * C);
    if (A == 0) {
        printf("erro! A não pode ser igual a 0 em uma função do 2 grau \n");
        return 1;
    }
    else if (Delta < 0) {
        printf("essa equaçao nao possui raizes reais \n");
        return 1;
    }
    else {
        float raizDelta = sqrt(Delta);
        float X1 = (-B + raizDelta) / (2 * A);
        float X2 = (-B - raizDelta) / (2 * A);

        //saída de dados
        
        printf("O valor de x1 e: %.2f\n", X1);
        printf("O valor de x2 é: %.2f\n", X2);

    }

    return 0;
}