#include <stdio.h>
int main(void)
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("O numero %d e par", numero);
    }
    else
    {
        printf("O numero %d e impar", numero);
    }
}