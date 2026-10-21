#include <stdio.h>

void troca(int x, int y);

int main(void)
{
    int a = 3, b = 7;

    printf("Antes:  a = %d, b = %d\n", a, b);
    troca(a, b);
    printf("Depois: a = %d, b = %d\n", a, b);
    return 0;
}

/* Troca os valores de x e y */
void troca(int x, int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}