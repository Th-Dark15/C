#include <stdio.h>
void par_impar(int *numeros, int *par, int *impar, int tamanho)
{
    int i, j = 0, k = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            par[j] = numeros[i];
            j++;
        }
        else
        {
            impar[k] = numeros[i];
            k++;
        }
    }
}
int main()
{
    int tamanho = 10;
    int numeros[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valores_par=0, valores_impar=0;
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (numeros[i] % 2 == 0)
        {
            valores_par++;
        }
        else
        {
            valores_impar++;
        }
    }
    int par[valores_par], impar[valores_impar];
    par_impar(numeros, par, impar, tamanho);
    int k, j;
    for (k = 0; k < valores_par; k++)
    {
        printf("Os valores pares sao: ");
        printf("%d\n", par[k]);
    }
    for (j = 0; j < valores_impar; j++)
    {
        printf("Os valores impares sao: ");
        printf("%d\n", impar[j]);
    }
}
