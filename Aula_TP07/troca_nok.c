/*
 * TP07 - Desafio 2: Trocar dois valores (retomado da aula TP06)
 *
 * OBJETIVO: Corrigir a função troca() para que, no fim, a = 7 e b = 3.
 * Sugestão: a função precisa de saber ONDE estão a e b,
 * e não apenas QUANTO valem.
 */

#include <stdio.h>

void troca(int x, int y);

int main(void)
{
    int a = 3, b = 7;

    printf("Antes:  a = %d, b = %d\n", a, b);
    troca(a, b);
    printf("Depois: a = %d, b = %d\n", a, b);
    return 0;
}

/* Troca os valores de x e y */
void troca(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
