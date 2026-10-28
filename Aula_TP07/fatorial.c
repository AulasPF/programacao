/*
 * TP07 - Extra: Uma função que se chama a si própria (recursividade)
 *
 * n! = n * (n-1)!     e     0! = 1
 *
 * OBJETIVO: Seguir a execução no PythonTutor e observar quantas
 * "cópias" da função fatorial() existem ao mesmo tempo.
 */

#include <stdio.h>

int fatorial(int n);

int main(void)
{
    int r = fatorial(4);
    printf("4! = %d\n", r);
    return 0;
}

int fatorial(int n)
{
    if (n == 0) {
        return 1;                    /* caso base: termina aqui */
    }
    return n * fatorial(n - 1);      /* chamada recursiva */
}
