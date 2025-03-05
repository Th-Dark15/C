#include <stdio.h>
int encontrar(int *numeros, int tamanho, int *num)
{
    int i, j = 0, cont = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (numeros[i] >= *num)
        {
            for (j = tamanho; j > i; j--)
            {
                numeros[j] = numeros[j - 1];
            }
            numeros[i]=*num;
            return 1;
        }
    }

    numeros[tamanho] = *num;
    cont++;
    return cont;
}
int main()
{
    int numeros[11] = {3, 7, 12, 18, 23, 29, 35, 42, 49, 55};
    int tamanho = 10;
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    int cont = encontrar(numeros, tamanho, &num);
    int i;
    for (i = 0; i < tamanho + cont; i++)
    {
        printf("%d\n", numeros[i]);
    }
}
