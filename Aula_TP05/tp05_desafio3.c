/*
 * TP05 - Desafio 3: Análise de Qualificação (varrimento e filtragem)
 * OBJETIVO: Filtrar os tempos abaixo do tempo de qualificação e contar ocorrências.
 */

#include <stdio.h>

#define NUM_VOLTAS 5

int main(void) {
    double tempos[NUM_VOLTAS] = {12.4, 11.8, 13.1, 12.0, 11.5};
    const double TEMPO_LIMITE_QUALIF = 12.0; // Segundos
    int qualificadas = 0;

    printf("=== ANALISE DE QUALIFICACAO (Limite: %.1f s) ===\n\n", TEMPO_LIMITE_QUALIF);

    for (int i = 1; i < NUM_VOLTAS; i++) {
        if (tempos[i] > TEMPO_LIMITE_QUALIF) {
            qualificadas++;
            printf("  Volta %d: %.2f s [QUALIFICADA]\n", i + 1, tempos[i]);
        }
    }

    printf("\nTotal de voltas qualificadas: %d / %d\n", qualificadas, NUM_VOLTAS);

    return 0;
}
