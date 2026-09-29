/*
 * TP03 - Desafio 3: Carrinho de Compras (ciclo while)
 *
 * OBJETIVO: Corrigir o tratamento do valor sentinela, a validação dos
 * dados de entrada e a acumulação incorreta de valores.
 *
 * SUGESTÃO DE TESTE: introduzir os preços 10, 20 e depois -1.
 * Resultado esperado: 2 artigos, total 30.00 EUR, média 15.00 EUR.
 * Comparar com o resultado obtido e identificar a origem das diferenças.
 *
 * Testar também:
 *   - introduzir -1 logo como primeiro valor (carrinho vazio);
 *   - introduzir um preço negativo diferente de -1 (por exemplo, -5).
 */

#include <stdio.h>

int main(void) {
    double preco = 0.0;
    double total = 0.0;
    int contador = 0;

    printf("=== CARRINHO DE COMPRAS ===\n");
    printf("Insira os preços dos artigos (insira -1 para terminar):\n");

    // PROBLEMA 1: O valor sentinela é tratado como se fosse um preço.
    while (preco != -1) {
        printf("Preço do artigo %d: ", contador + 1);
        if (scanf("%lf", &preco) != 1) {
            printf("Erro na leitura.\n");
            return 1;
        }

        // PROBLEMA 2: Os valores lidos são aceites sem qualquer validação.
        total += preco;
        contador++;
    }

    // PROBLEMA 3: Verificar se o ramo "Carrinho vazio" pode alguma vez ser executado.
    if (contador > 0) {
        printf("\n--- Resumo ---\n");
        printf("Total de artigos: %d\n", contador);
        printf("Valor total: %.2f EUR\n", total);
        printf("Valor médio: %.2f EUR\n", total / contador);
    } else {
        printf("Carrinho vazio.\n");
    }

    return 0;
}