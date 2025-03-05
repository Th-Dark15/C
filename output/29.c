#include <stdio.h>

int maior(int num, int numb)
{
    if (num > numb)
    {
        printf("O numero %d e maior que o numero %d", num, numb);
        return 1;
    }
    else
    {
        printf("O numero %d e menor que o numero %d", num, numb);
        return 0;
    }
}

int main()
{
    int numero, numero2;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("Digite um numero: ");
    scanf("%d", &numero2);
    maior(numero, numero2);
}