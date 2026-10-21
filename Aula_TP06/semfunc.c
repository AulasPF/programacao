#include <stdio.h>

int main() {
    float a, b, c, media;

    printf("Introduza o primeiro número: ");
    scanf("%f", &a);

    printf("Introduza o segundo número: ");
    scanf("%f", &b);

    printf("Introduza o terceiro número: ");
    scanf("%f", &c);

    media = (a + b + c) / 3;

    printf("A média é: %.2f\n", media);

    return 0;
}
