#include <stdio.h>
int main(void)
{
    int numero, i, resultado;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i = 0; i<= 10; i++)
    {
        resultado = numero * i;
        printf("%d x %d= %d\n", numero, i, resultado);
    }
}