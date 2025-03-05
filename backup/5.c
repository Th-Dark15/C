#include <stdio.h>
int main(void)
{
    int primeiro_numero, maior = 0, digito, segundo_numero, maior_2 = 0, digito_2, resultado_1;
    printf("Digite o primeiro numero (de 1 a 999): ");
    scanf("%d", &primeiro_numero);
    if (primeiro_numero <= 0 || primeiro_numero > 999)
    {
        printf("O valor esta fora do limite");
        return 1;
    }
    printf("Digite o segundo numero (de 1 a 999): ");
    scanf("%d", &segundo_numero);
    if (segundo_numero <= 0 || segundo_numero > 999)
    {
        printf("O valor esta fora do limite");
        return 1;
    }
    while (primeiro_numero > 0)
    {
        digito = primeiro_numero % 10;
        if (digito > maior)
        {
            maior = digito;
        }
        primeiro_numero = primeiro_numero / 10;
    }
    while (segundo_numero > 0)
    {
        digito_2 = segundo_numero % 10;
        if (digito_2 > maior_2)
        {
            maior_2 = digito_2;
        }
        segundo_numero = segundo_numero / 10;
    }

    if (maior > maior_2)
    {
        resultado_1 = maior - maior_2;
        printf("Os maiores numeros sao: %d e %d \n", maior, maior_2);
        printf("A diferenca entre o maior numero: %d e o menor %d e de %d", maior, maior_2, resultado_1);
    }
    else
    {
        resultado_1 = maior_2 - maior;
        printf("Os maiores numeros sao: %d e %d \n", maior, maior_2);
        printf("A diferenca entre o maior numero: %d e o menor %d e de %d", maior_2, maior, resultado_1);
    }
}
