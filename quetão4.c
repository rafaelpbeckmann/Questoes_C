#include <stdio.h>

int main() {
    float px, py;
    printf("Digite as coordenadas do drone (x, y): ");
    scanf("%f %f", &px, &py);

    // Verifica Azul
    int dentroAzul = (px >= 4 && px <= 14 && py >= 4 && py <= 10);
    // Verifica Vermelho
    int dentroVermelho = (px >= 16 && px <= 26 && py >= 2 && py <= 12);

    if (dentroAzul || dentroVermelho) {
        printf("Pouso permitido!\n");
    } else {
        printf("Fora da area permitida. Pouso proibido.\n");
    }

    return 0;
}