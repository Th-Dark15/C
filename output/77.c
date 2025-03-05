#include <stdio.h>
int encontrar(int *numeros, int tamanho, int *num)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (numeros[i] == *num)
        {
            printf("O valor %d esta na posicao %d", *num, (i + 1));
            return 1;
        }
        if (numeros[i] > *num)
        {
            printf("O valor %d deveria esta na posicao %d", *num, (i + 1));
            return 1;
        }
    }
    printf("O valor %d deveria estar na posicao %d\n", *num, (tamanho + 1));
    return 0;
}
int main()
{
    int numeros[] = {3, 7, 12, 18, 23, 29, 35, 42, 49, 55};
    int tamanho = 10;
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    encontrar(numeros, tamanho, &num);
}
