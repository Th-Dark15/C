#include <stdio.h>
int crescente(int *numeros, int tamanho)
{
    int i;
    for (i = 0; i < tamanho - 1; i++)
    {
        if (numeros[i] > numeros[i + 1])
        {
            printf("O vetor nao esta ordenado de forma crescente");
            return 0;
        }
    }
    printf("O vetor esta ordenado de forma crescente");
    return 1;
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    crescente(numeros, tamanho);
}
