#include <stdio.h>
int main(void)
{
    int numero, soma = 0;
    while (numero != 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        soma += numero;
    }
    printf("\nA soma dos numeros e = %d", soma);
}