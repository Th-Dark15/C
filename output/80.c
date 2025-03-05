#include <stdio.h>
void encontrar(int *numeros, int *numeros2, int *novo_num, int tamanho, int tamanho_2)
{
    int i, j;
    for (i = 0; i < tamanho; i++)
    {
        novo_num[i] = numeros[i];
    }
    for (j = 0; j < tamanho_2 - tamanho; j++)
    {
        novo_num[tamanho + j] = numeros2[j];
    }
}
int main()
{
    int numeros[] = {1, 3, 5, 7, 9};
    int numeros2[] = {2, 4, 6, 8, 10};
    int tamanho = 5;
    int tamanho_2 = 5;
    int novo_num[10]= {0};
    encontrar(numeros, numeros2, novo_num, tamanho, tamanho_2);
    int i;
    for (i = 0; i < tamanho + tamanho_2; i++)
    {
        printf("%d\n", novo_num[i]);
    }
}
