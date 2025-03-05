#include <stdio.h>
int contido(int *a, int *b, int tamanho, int tamanho2)
{
    int i, j, cont = 0;
    for (i = 0; i < tamanho; i++)
    {
        for (j = 0; j < tamanho2; j++)
        {
            if (a[i] == b[j])
            {
                cont++;
            }
            if (cont == tamanho2)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{
    int a[] = {1, 2};
    int tamanho = 2;
    int b[] = {1, 2, 3, 4};
    int tamanho2 = 4;
    contido(a, b, tamanho, tamanho2);
}
