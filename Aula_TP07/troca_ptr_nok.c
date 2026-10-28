/*
 * TP07 - Desafio 3: "Já usei ponteiros... e continua sem funcionar!"
 *
 * Esta versão da função troca() recebe ponteiros, compila sem avisos,
 * mas a e b continuam com os valores iniciais.
 *
 * OBJETIVO: Explicar o que está, de facto, a ser trocado dentro da
 * função. Corrigir o código.
 */

#include <stdio.h>

void troca(int *x, int *y);

int main(void)
{
    int a = 3, b = 7;

    printf("Antes:  a = %d, b = %d\n", a, b);
    troca(&a, &b);
    printf("Depois: a = %d, b = %d\n", a, b);
    return 0;
}

/* Troca os valores das variáveis apontadas por x e y (?) */
void troca(int *x, int *y)
{
    int *tmp = x;
    x = y;
    y = tmp;
}
