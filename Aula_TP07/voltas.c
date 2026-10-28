/*
 * TP07 - Desafio 5: Funções que trabalham sobre arrays
 *
 * A função mostraTempos() já está feita e serve de modelo.
 *
 * OBJETIVO:
 *   1. Escrever o corpo de minimo(): devolve o menor tempo do array.
 *   2. Escrever o corpo de penaliza(): soma 'seg' segundos ao tempo da
 *      volta número 'volta' (1 a n). Se 'volta' não for válida, não faz nada.
 *   3. Observar: depois de penaliza(), o array no main ficou alterado?
 *      Na aula TP06, somaUm(n) não conseguia alterar n. Porque é que
 *      aqui não foi preciso escrever &tempos?
 */

#include <stdio.h>

#define NUM_VOLTAS 5

void mostraTempos(double t[], int n);
double minimo(double t[], int n);
void penaliza(double t[], int n, int volta, double seg);

int main(void)
{
    double tempos[NUM_VOLTAS] = {12.4, 11.8, 13.1, 12.0, 11.5};

    mostraTempos(tempos, NUM_VOLTAS);
    printf("Melhor volta: %.2f s\n\n", minimo(tempos, NUM_VOLTAS));

    /* Volta 5 com corte de chicane: +2.0 s de penalização */
    penaliza(tempos, NUM_VOLTAS, 5, 2.0);

    mostraTempos(tempos, NUM_VOLTAS);
    printf("Melhor volta: %.2f s\n", minimo(tempos, NUM_VOLTAS));
    return 0;
}

/* Escreve no ecrã os n tempos guardados em t */
void mostraTempos(double t[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("Volta %d: %.2f s\n", i + 1, t[i]);
    }
}

/* Devolve o menor dos n valores guardados em t */
double minimo(double t[], int n)
{
    /* Escreva o código em falta */
}

/* Soma seg segundos ao tempo da volta 'volta' (numerada de 1 a n) */
void penaliza(double t[], int n, int volta, double seg)
{
    /* Escreva o código em falta */
}
