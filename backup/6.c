#include <stdio.h>
int main(void)
{
    int numero, i = 0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }
}
