#include <stdio.h>
int main(void)
{
    int numero, i;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        if (numero % i == 0)
        {
            printf("O numero %d e divisor de %d\n", i, numero);
        }
    }
}