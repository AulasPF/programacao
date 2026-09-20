/*
 * TP03 - Desafio 2: Seleção de método de pagamento (switch-case)
 * OBJETIVO: Identificar problemas de fall-through (falta de break) e leituras de carateres
 */

#include <stdio.h>

int main(void) {
    char metodo;

    printf("=== SISTEMA DE PAGAMENTO ===\n");
    printf("[M]ultibanco\n");
    printf("[W] MB Way\n");
    printf("[C] Cartão de Crédito\n");
    printf("Selecione o método de pagamento: ");

    // A atenção ao espaço antes de %c evita ler o '\n' residual do buffer
    if (scanf(" %c", &metodo) != 1) {
        printf("Erro na leitura.\n");
        return 1;
    }

    // PROBLEMA: Ausência de 'break' em alguns casos e falta de tratamento robusto para o default
    switch (metodo) {
        case 'M':
        case 'm':
            printf("Processando pagamento por Multibanco...\n");
            break;
        case 'W':
        case 'w':
            printf("Processando pagamento via MB Way...\n");
        case 'C':
        case 'c':
            printf("Processando pagamento por Cartão de Crédito...\n");
            break;
        default:
            printf("Método de pagamento desconhecido.\n");
    }

    return 0;
}