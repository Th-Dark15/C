#include <stdio.h>
void contagem(int *numeros, int tamanho, int valor_a, int valor_b)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        if (valor_a == numeros[i])
        {
            numeros[i] = valor_b;
        }
    }
}
int main()
{
    int numeros[] = {2, 3, 2, 4, 2};
    int tamanho = 5;
    int valor_a, valor_n;
    printf("Entre com o valor antigo: ");
    scanf("%d", &valor_a);
    printf("Entre com o valor antigo: ");
    scanf("%d", &valor_n);
    contagem(numeros, tamanho, valor_a, valor_n);
    int i;
    for(i=0;i<tamanho;i++){
        printf("%d\n", numeros[i]);
    }
}
