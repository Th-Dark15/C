#include <stdio.h>
void ocorrencia(int *numeros, int tamanho, int *num, int *num2)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (numeros[i] == *num)
        {
            numeros[i] = *num2;
        }
    }
}
int main()
{
    int numeros[] = {3, 7, 3, 3, 5, 7, 5, 7, 3, 5};
    int tamanho = 10;
    int num, num2;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);
    ocorrencia(numeros, tamanho, &num, &num2);
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\n",numeros[i]);
    }
}
