#include <stdio.h>
void pular(int vetor[], int tamanho)
{
    int i, j, recebe;
    for (i = 0, j = 1; j < tamanho; i += 2, j += 2)
    {
        recebe= j;
        j= i;
        i=  recebe;
        printf("%d , %d", j, i);
    }
 
}
int main()
{
    int vetor[10] = {3, 7, 1, 7, 0, 4, 6, 7, 8, 5}, tamanho;
    tamanho = 10;

    pular(vetor, tamanho);
}
