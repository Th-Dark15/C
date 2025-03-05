#include <stdio.h>
void crescente(int *numeros, int tamanho)
{
    int i, valor = 1;
    numeros[0] = valor;
    for (i = 1; i < tamanho; i++)
    {
        numeros[i] = numeros[i - 1] + valor;
        valor++;
    }
}
int main()
{
    int tamanho = 50;
    int numeros[tamanho];
    crescente(numeros, tamanho);
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n", numeros[i]);
    }
}
