#include <stdio.h>

int mdc(int n1, int n2)
{
    int menor, i, result;
    if (n1 < n2)
    {
        menor = n1;
    }
    else
    {
        menor = n2;
    }
    for (i = 1; i <= menor; i++)
    {
        if ((n1 % i == 0) && (n2 % i == 0))
        {
            result = i;
        }
    }
    return result;
}

int main()
{
    int n1, n2, resp;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    resp = mdc(n1, n2);
    printf("MDC (%d,%d)=%d", n1, n2, resp);
}

