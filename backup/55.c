#include <stdio.h>

int main()
{
    int i, vetor[10], maior = 0, menor = 1000;
    for (i = 0; i < 10; i++)
    {
        printf("Entre com um numero: ");
        scanf("%d", &vetor[i]);
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
        if (menor > vetor[i])
        {
            menor = vetor[i];
        }
    }

    printf("maior= %d , menor = %d", maior, menor);
}
