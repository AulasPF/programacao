/*
 * TP03 - Desafio 1: Cálculo de portes de envio (if-else if-else)
 * OBJETIVO: Corrigir erros de lógica nas condições e uso indevido de '=' vs '=='
 */

#include <stdio.h>

int main(void) {
    double peso;
    int tipo_cliente; // 1 - Normal, 2 - Premium
    double portes = 0.0;

    printf("Introduza o peso da encomenda (kg): ");
    if (scanf("%lf", &peso) != 1) {
        printf("Erro na leitura do peso.\n");
        return 1;
    }

    printf("Introduza o tipo de cliente (1-Normal, 2-Premium): ");
    if (scanf("%d", &tipo_cliente) != 1) {
        printf("Erro na leitura do tipo de cliente.\n");
        return 1;
    }

    // PROBLEMA 1: Ordem incorreta de condições e uso de '=' em vez de '=='
    // O aluno deve corrigir os operadores e a hierarquia dos escalões de peso.
    if (peso <= 0) {
        printf("Erro: Peso inválido.\n");
    } else if (tipo_cliente = 2) {
        // Clientes Premium têm portes gratuitos independentemente do peso
        portes = 0.0;
        printf("Cliente Premium: Portes gratuitos.\n");
    } else if (peso < 2.0) {
        portes = 5.0;
    } else if (peso >= 2.0 && peso < 5.0) {
        portes = 8.0;
    } else {
        portes = 12.0;
    }

    if (peso > 0) {
        printf("Valor dos portes a aplicar: %.2f EUR\n", portes);
    }

    return 0;
}