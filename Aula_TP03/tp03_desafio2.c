/*
 * TP03 - Desafio 2: Seleção de método de pagamento (switch-case)
 * OBJETIVO: Identificar problemas de fall-through (falta de break) e leituras de carateres
 */

#include <stdio.h>

int main(void) {
    char metodo;
    float valor; 

    printf("=== SISTEMA DE PAGAMENTO ===\n");

    /* Valor a processar */
    printf("Valor: ");
    scanf("%f",&valor); 

    /* Método de processamento */
    printf("[M]ultibanco\n");
    printf("MB [W]ay\n");
    printf("[C]artão de Crédito\n");
    printf("Selecione o método de pagamento [MWC]: ");

    // A atenção ao espaço antes de %c evita ler o '\n' residual do buffer
    if (scanf(" %c", &metodo) != 1) {
        printf("Erro na leitura.\n");
        return 1;
    }

    // PROBLEMA: Ausência de 'break' em alguns casos e falta de tratamento robusto para o default
    printf("Processando o pagamento de %.2f Eur por ",valor);

    switch (metodo) {
        case 'M':
        case 'm':
            printf("Multibanco...\n");
            break;
        case 'W':
        case 'w':
            printf("MB Way...\n");
        case 'C':
        case 'c':
            printf("Cartão de Crédito...\n");
            break;
        default:
            printf("Método de pagamento desconhecido.\n");
    }

    return 0;
}