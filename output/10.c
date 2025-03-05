#include <stdio.h>
int main(void)
{
    int numero, i, j;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        if (i % 2 == 0)
        {
            for (j = i; j >= 1; j--)
            {
                printf("%d ", j);
            }
        }
        else
        {
            for (j = 1; j <= i; j++)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}