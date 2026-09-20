/*
 * TP03 - Desafio 3: Carrinho de Compras (ciclo while)
 * OBJETIVO: Corrigir o tratamento do valor sentinela e a acumulação incorreta de dados.
 */

#include <stdio.h>

int main(void) {
    double preco = 1.0;
    double total = 0.0;
    int contador = 0;

    printf("=== CARRINHO DE COMPRAS ===\n");
    printf("Insira os preços dos artigos (insira 0 para terminar):\n");

    // BUG / ERRO A CORRIGIR PELOS ALUNOS:
    // O valor inserido para terminar (ou valores inválidos/negativos) está 
    // a ser acumulado no total antes de a condição de paragem ser validada.
    while (preco != 0) {
        printf("Preço do artigo %d: ", contador + 1);
        
        if (scanf("%lf", &preco) != 1) {
            printf("Erro na leitura.\n");
            return 1;
        }

        // ERRO: A acumulação e contagem ocorrem antes de testar se o preço é válido ou sentinela!
        total += preco;
        contador++;
    }

    if (contador > 0) {
        // Correção necessária para descontar o valor sentinela/paragem das estatísticas finais
        printf("\n--- Resumo ---\n");
        printf("Total de artigos: %d\n", contador);
        printf("Valor total: %.2f EUR\n", total);
        printf("Valor medio: %.2f\n",total/contador);
    } else {
        printf("Carrinho vazio.\n");
    }

    return 0;
}