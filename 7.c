#include <stdio.h>
int main(void)
{
    int numero, i, soma = 1;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = 1; i <= numero; i++)
    {
        printf("%d\n", soma);
        soma = soma + i;
    }
}