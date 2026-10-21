#include <stdio.h>

/* Inclua aqui os protótipos das funções */

int main() {
    float a = lerNumero();
    float b = lerNumero();
    float c = lerNumero();

    float media = calcularMedia(a, b, c);

    printf("A média é: %.2f\n", media);

    return 0;
}

float lerNumero() {
    /* Escreva o código em falta */
}

float calcularMedia(float a, float b, float c) {
    float resultado; 
    resultado = (a + b + c) / 3;
    return resultado; 
}
