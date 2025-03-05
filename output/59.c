#include <stdio.h>
int multiplicar(int *numeros, int tamanho, int mult)
{
    int i, resultado = 0;
    for (i = 0; i < tamanho; i++)
    {
        resultado += numeros[i] * mult;
    }
    return resultado;
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int mult;
    printf("Entre com um numero: ");
    scanf("%d", &mult);

    int resultado = multiplicar(numeros, tamanho, mult);
    printf("O resultado e = %d", resultado);
}
