#include <stdio.h>

int main()
{
    int i, vetor[6], j;
    for (i = 0; i < 6; i++)
    {
        printf("Entre com um numero: ");
        scanf("%d", &vetor[i]);
    }
    for (j = 0; j < 6; j++)
    {
        if (vetor[j] % 2 == 0)
        {
            printf("%d ", vetor[j]);
        }
    }
}
