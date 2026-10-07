/*
 * TP04 - Desafio 2: Validação de PIN de Acesso (ciclo do-while)
 * OBJETIVO: Corrigir a condição lógica de paragem do do-while e validar o resultado final.
 */

#include <stdio.h>

int main(void) {
    const int PIN_CORRETO = 4198;
    const int MAX_TENTATIVAS = 3;
    int pin_introduzido;
    int tentativas = 0;

    printf("=== TERMINAL DE CONTROLO DE ACESSO ===\n");

    // ERRO 1: A condição do while usa operador || em vez de &&,
    // permitindo que o ciclo continue infinitamente se o PIN for incorreto!
    do {
        tentativas++;
        printf("Introduza o PIN de 4 digitos (Tentativa %d de %d): ", tentativas, MAX_TENTATIVAS);
        
        if (scanf("%d", &pin_introduzido) != 1) {
            printf("Entrada invalida.\n");
            // Limpar buffer em caso de entrada nao numerica
            while (getchar() != '\n');
            continue;
        }

    } while (pin_introduzido != PIN_CORRETO || tentativas < MAX_TENTATIVAS);

    // ERRO 2: Falta testar se o ciclo terminou por sucesso ou por esgotar tentativas!
    printf("\nAcesso Concedido! Bem-vindo ao evento.\n");

    return 0;
}
