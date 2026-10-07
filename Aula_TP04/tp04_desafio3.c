/*
 * TP04 - Desafio 3: Lotação e Receita de Sala de Espetáculos (ciclos aninhados)
 * OBJETIVO: Processar a venda lugar a lugar. Corrigir o âmbito (scope) das variáveis
 *           acumuladoras e os limites do ciclo interno.
 * NOTE: Sem uso de arrays. A variação de ocupação torna o ciclo interno necessário.
 */

#include <stdio.h>

#define FILAS 3
#define LUGARES_POR_FILA 4

int main(void) {
    double receita_total = 0.0;
    int total_bilhetes_vendidos = 0;
    
    // ERRO 1: Variáveis acumuladoras da fila declaradas fora do ciclo das filas.
    // Sem reinicialização a 0 no início de cada fila, acumulam valores anteriores!
    double receita_fila = 0.0; 
    int bilhetes_fila = 0;

    printf("=== CONTROLO DE BILHETEIRA DA SALA ===\n\n");
    printf("Tamanho da sala: %d filas, %d lugares por fila.\n\n",FILAS,LUGARES_POR_FILA);

    for (int f = 1; f <= FILAS; f++) {
        double preco_lugar;
        switch (f)
        {
        case 1:
            preco_lugar = 15.;
            break;

            case 2: 
            preco_lugar = 12.;
            break; 
            
            case 3: 
            preco_lugar = 10; 
            break; 
        
        default:
            break;
        } 

        printf("--- Fila %d (Preco: %.2f EUR/lugar) ---\n", f, preco_lugar);

        // ERRO 2: Limite do ciclo interno 'l < LUGARES_POR_FILA' ignora o último lugar!
        for (int l = 1; l < LUGARES_POR_FILA; l++) {
            int vendido;
            printf("  Lugar %d foi vendido? (1-Sim, 0-Nao): ", l);
            if (scanf("%d", &vendido) != 1) {
                printf("  Entrada invalida.\n");
                while (getchar() != '\n');
                continue;
            }

            if (vendido == 1) {
                receita_fila += preco_lugar;
                bilhetes_fila++;
            }
        }

        receita_total += receita_fila;
        total_bilhetes_vendidos += bilhetes_fila;
        printf(">> Fila %d: %d bilhete(s) vendido(s) | Receita: %.2f EUR\n\n", 
               f, bilhetes_fila, receita_fila);
    }

    printf("===================================\n");
    printf("TOTAL DA BILHETEIRA: %d bilhetes | %.2f EUR\n", 
           total_bilhetes_vendidos, receita_total);

    return 0;
}
