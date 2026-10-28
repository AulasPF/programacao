/*
 * TP07 - Desafio 4: Quantos elementos tem o array?
 *
 * Retoma os tempos de volta da aula TP05. A função media() tenta
 * descobrir sozinha quantos elementos tem o array que recebe.
 *
 * OBJETIVO:
 *   1. Compilar e ler com atenção o aviso (warning) do compilador.
 *   2. Executar: a média está correta? Que valores de sizeof aparecem?
 *   3. Corrigir: a função passa a receber também o número de elementos.
 *
 * Nota: sizeof(x) dá o número de bytes ocupados por x.
 *       %zu é o formato do printf para valores devolvidos por sizeof.
 */

#include <stdio.h>

#define NUM_VOLTAS 5

double media(double t[]);

int main(void)
{
    double tempos[NUM_VOLTAS] = {12.4, 11.8, 13.1, 12.0, 11.5};

    printf("No main:    sizeof(tempos) = %zu bytes\n", sizeof(tempos));
    printf("Tempo medio: %.2f s\n", media(tempos));
    return 0;
}

/* Calcula a média dos elementos de t */
double media(double t[])
{
    printf("Na funcao:  sizeof(t)      = %zu bytes\n", sizeof(t));

    int n = sizeof(t) / sizeof(t[0]);   /* número de elementos (?) */
    double soma = 0.0;

    for (int i = 0; i < n; i++) {
        soma += t[i];
    }
    return soma / n;
}
