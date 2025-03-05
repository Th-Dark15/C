#include <stdio.h>
void inverter(int *numeros, int tamanho)
{
    int i, temp;
    for (i = 0; i < tamanho/2; i++)
    {
        temp= numeros[i];
        numeros[i]= numeros[tamanho - i - 1];
        numeros[tamanho - i - 1]= temp;
    }
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;
    inverter(numeros, tamanho);
    int i;
    for(i=0; i<tamanho;i++)
    {
        printf("%d \n",numeros[i]);
    }
    
}