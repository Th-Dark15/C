#include <stdio.h>
int crescente(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] > vetor[i + 1])
        {
            printf("O vetor nao esta na ordem correta\n");
            return 0;
        }
    }
    printf("O vetor esta na ordem correta\n");
    return 1;
}

int main()
{
    int vetor[10] = {3, 7, 1, 7, 0, 4, 6, 7, 8, 5}, vetor2[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, tamanho;
    tamanho = 10;

    crescente(vetor, tamanho);
    crescente(vetor2, tamanho);
}
