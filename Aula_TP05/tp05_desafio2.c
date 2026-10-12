/*
 * TP05 - Desafio 2: Estatísticas da Prova (mínimo, máximo e média)
 * OBJETIVO: Corrigir a inicialização dos valores de extremo e calcular o tempo médio.
 */

#include <stdio.h>

#define NUM_VOLTAS 5

int main(void) {
    double tempos[NUM_VOLTAS] = {12.4, 11.8, 13.1, 12.0, 11.5};
    
    // ERRO 1: Inicializar o mínimo a 0.0 gera problemas...
    double minimo = 0.0;
    double maximo = 0.0;
    double soma = 0.0;
    int volta_mais_rapida = 0;

    for (int i = 0; i < NUM_VOLTAS; i++) {
        soma += tempos[i];

        if (tempos[i] < minimo) {
            minimo = tempos[i];
            volta_mais_rapida = i;
        }

        if (tempos[i] > maximo) {
            maximo = tempos[i];
        }
    }

    double media = soma / NUM_VOLTAS;
    
    printf("=== ESTATISTICAS DA PROVA ===\n\n");

    printf("Volta mais rapida: %.2f s (Volta %d)\n", minimo, volta_mais_rapida + 1);
    printf("Volta mais lenta:  %.2f s\n", maximo);
    printf("Tempo medio:       %.2f s\n", media);

    return 0;
}

