#include <stdio.h>
void maior_menor(int *numeros, int tamanho, int *maior, int *menor)
{
    int i;
    *maior =0;
    *menor = 999;
    for (i = 0; i < tamanho; i++)
    {
        if (*maior < numeros[i])
        {
            *maior = numeros[i];
        }
        if (*menor > numeros[i])
        {
            *menor = numeros[i];
        }
    }
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    int maior, menor;
    maior_menor(numeros, tamanho, &maior, &menor);
    printf("O maior valor dentro do array e = %d e o menor = %d", maior, menor);
}