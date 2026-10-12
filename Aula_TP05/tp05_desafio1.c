/*
 * TP05 - Desafio 1: Registo de Tempos de Volta (arrays e limites)
 *
 * Para simplificar, o array com tempos é já criado com valores. 
 *
 * OBJETIVO: Corrigir o erro out-of-bounds (i <= NUM_VOLTAS) e 
 * ajustar a indexação (0 a N-1).
 */

#include <stdio.h>

#define NUM_VOLTAS 5

int main(void) {
    double tempos[NUM_VOLTAS] = {12.4, 11.8, 13.1, 12.0, 11.5};

    printf("=== REGISTO DE TEMPOS DE VOLTA ===\n\n");

    // ERRO 1 (Out-of-bounds): A condição 'i <= NUM_VOLTAS' tenta aceder
    // ao índice NUM_VOLTAS (6.º elemento num array de 5), acedendo a memória inválida!
    // ERRO 2 (Apresentação): Imprime 'Volta 0' a 'Volta 5' em vez de 'Volta 1' a 'Volta 5'.
    for (int i = 0; i <= NUM_VOLTAS; i++) {
        printf("Volta %d: %.2f segundos\n", i, tempos[i]);
    }

    return 0;
}
