/*
 * TP07 - Desafio 1: O que é um ponteiro?
 *
 * OBJETIVO: Antes de compilar, preveja o que o programa escreve em
 * cada printf. Depois, compile, execute e compare com a previsão.
 */

#include <stdio.h>

int main(void)
{
    int n = 3;
    int m = 7;
    int *p;        /* p é um ponteiro para int: guarda o ENDEREÇO de um int */

    p = &n;        /* &n = endereço de n  ->  p passa a "apontar" para n */
    printf("1: n = %d, *p = %d\n", n, *p);

    *p = 10;       /* *p = o que está no endereço guardado em p */
    printf("2: n = %d, *p = %d\n", n, *p);

    p = &m;        /* p passa a apontar para m */
    *p = *p + 1;
    printf("3: n = %d, m = %d, *p = %d\n", n, m, *p);

    /* Os endereços (%p) são escritos em hexadecimal.
       O (void *) é exigido pelo %p; para já, basta aceitá-lo. */
    printf("4: &m = %p\n", (void *) &m);
    printf("5:  p = %p\n", (void *) p);

    return 0;
}
