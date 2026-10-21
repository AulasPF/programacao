#include <stdio.h>

int main(void)
{
    int var1, var2;
    int maior;

    scanf("%d\n%d",&var1,&var2);

    printf("Valores: %d, %d\n",var1,var2); 
    maior = max(var1,var2);
    printf("Max: %d\n",maior);
    return 0; 
}

int max(int a, int b)
{
    int res;
    if (a > b)
        res = a;
    else
        res = b;
    return res;
}
