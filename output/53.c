#include <stdio.h>
void maior_menor(int num, int *maior, int *menor)
{
    int digito;
    *menor = 9;
    *maior = 0;
    while (num > 0)
    {
        digito = num % 10;
        if (digito > *maior)
            *maior = digito;
        if (digito < *menor)
            *menor = digito;
        num /= 10;
    }
}

int main()
{
    int num, maior, menor;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    maior_menor(num, &maior, &menor);
}
