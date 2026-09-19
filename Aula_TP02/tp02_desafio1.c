#include <stdio.h>

int main(void) {
    // 1. Alterar os especificadores de formato incorretos abaixo:
    int contador = 2147483647; // INT_MAX num sistema típico de 32/64 bits
    double precisao_pi = 3.141592653589793;
    char letra = 'A';

    printf("Contador: %f\n", contador);         // BUG 1
    printf("Pi: %d\n", precisao_pi);             // BUG 2
    printf("Letra: %s\n", letra);               // BUG 3

    // 2. O que acontece ao somar 1 ao valor máximo de int?
    contador = contador + 1;
    printf("Contador apos incremento: %d\n", contador);

    // 3. Imprima o tamanho em bytes de cada variável usando sizeof
    // Dica: utilize o especificador %zu para a função sizeof
    
    return 0;
}