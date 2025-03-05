#include <stdio.h>
void troca(int *numeros, int tamanho, int *valor)
{
    int i, j;
    for (i = 0, j = 1; i < tamanho; i += 2, j += 2)
    {
        *valor = numeros[i];
        numeros[i] = numeros[j];
        numeros[j] = *valor;
    }
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int valor;
    troca(numeros, tamanho, &valor);
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n",numeros[i]);
    }
}
