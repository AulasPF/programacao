#include <stdio.h>

float calcularMedia(float a, float b, float c);

int main(void)
{
    float a = 2.0, b = 4.0, c = 6.0;

    float media = calcularMedia(a, b, c);

    printf("Média: %.2f\n", media);
    printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    return 0;
}

/* Calcula a média e, no fim, coloca os parâmetros a zero */
float calcularMedia(float a, float b, float c)
{
    float m;
    m = (a + b + c) / 3;
    a = 0.0;
    b = 0.0;
    c = 0.0;
    return m;
}