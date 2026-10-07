/*
 * TP04 - Desafio 1: Tabela de Tarifas de Estacionamento (ciclo for)
 * OBJETIVO: Corrigir o erro off-by-one no limite do ciclo e aplicar corretamente
 *           o desconto de 50% a partir da 3.ª hora (h >= 3).
 */

#include <stdio.h>

int main(void) {
    int horas_estadia;
    double tarifa_base_hora = 2.0;
    double total_cobrado = 0.0;

    printf("=== SISTEMA DE ESTACIONAMENTO ===\n");
    printf("Introduza o numero de horas de permanencia (1 a 12): ");
    if (scanf("%d", &horas_estadia) != 1 || horas_estadia <= 0) {
        printf("Numero de horas invalido.\n");
        return 1;
    }

    // ERRO 1 (Off-by-one): O ciclo devia processar da hora 1 ate a hora 'horas_estadia' inclusive (h <= horas_estadia).
    // ERRO 2 (Lógica de Desconto e continue): 
    //   Apenas testa 'h == 3' em vez de 'h >= 3' e o 'continue' salta a acumulação de valor!
    for (int h = 1; h < horas_estadia; h++) {
        if (h == 3) {
            printf("Hora %d: Aplicado desconto de longa duracao (50%%)\n", h);
            continue; // Salta a acumulação de valor!
        }

        total_cobrado += tarifa_base_hora;
        printf("Hora %d: Subtotal acumulado = %.2f EUR\n", h, total_cobrado);
    }

    printf("\nValor total a pagar: %.2f EUR\n", total_cobrado);

    return 0;
}
