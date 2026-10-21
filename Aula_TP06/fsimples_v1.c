#include <stdio.h>

int max(int, int);

int main(void)
{
    int var1, var2;
    int maior;

    scanf("%d\n%d",&var1,&var2);

    printf("Valores: %d, %d\n",var1,var2); 

    if (var1 > var2)
        maior = var1;
    else
        maior = var2;

    printf("Max: %d\n",maior);
    return 0; 
}
