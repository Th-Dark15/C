#include <stdio.h>
int main(void)
{
    int numero, numero_2, i, contador = 1;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero_2);
    for (i = 1; numero + contador < numero_2; i++)
    {
        numero = numero + contador;
        contador++;
        printf("%d\n", numero);
    }
    printf("Total de numeros %d", i);
}