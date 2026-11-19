/* contador.c
 * Conta quantas vezes o programa já foi executado,
 * guardando o valor no ficheiro contagem.txt
 */
#include <stdio.h>

int main(void)
{
    int n = 0;      /* se o ficheiro não existir, começa em 0 */
    FILE *f;

    /* 1. Ler o valor atual (se o ficheiro existir) */
    f = fopen("contagem.txt", "r");
    if (f != NULL) {
        fscanf(f, "%d", &n);
        fclose(f);
    }

    /* 2. Incrementar e mostrar */
    n++;
    printf("Já corri %d vezes\n", n);

    /* 3. Guardar o novo valor (cria o ficheiro, se necessário) */
    f = fopen("contagem.txt", "w");
    if (f == NULL) {
        printf("Erro: não foi possível escrever em contagem.txt\n");
        return 1;
    }
    fprintf(f, "%d\n", n);

    /* 4. Fecha o ficheiro */
    fclose(f);

    return 0;
}