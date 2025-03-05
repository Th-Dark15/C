#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Digite um numero: ");
    scanf("%d", &a);
    printf("Digite um numero: ");
    scanf("%d", &b);
    if (a > b)
    {
        printf("O numero %d e maior que o numero %d", a, b);
    }
    else
    {
        printf("O numero %d e maior que o numero %d", b, a);
    }
}
