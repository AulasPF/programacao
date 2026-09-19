#include <stdio.h>

int main(void) {
    int idade;
    float altura;
    char inicial;

    printf("Introduza a sua idade, altura (em metros, ex: 1.75) e a inicial do seu nome:\n");

    // BUG: O scanf abaixo contem erros comuns que causam falhas no programa
    scanf("%d %f %c", idade, altura, inicial); 

    printf("\n--- Dados Recolhidos ---\n");
    printf("Idade: %d anos\n", idade);
    printf("Altura: %.2f m\n", altura); // Mostra apenas 2 casas decimais
    printf("Inicial: %c\n", inicial);

    return 0;
}