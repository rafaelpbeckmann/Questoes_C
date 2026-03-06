#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, r1, x2, y2, r2;

    printf("Esfera 1 (x, y, raio): ");
    scanf("%f %f %f", &x1, &y1, &r1);
    printf("Esfera 2 (x, y, raio): ");
    scanf("%f %f %f", &x2, &y2, &r2);

    float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (distancia <= (r1 + r2)) {
        printf("As esferas estao colidindo!\n");
    } else {
        printf("As esferas nao estao colidindo.\n");
    }

    return 0;
}