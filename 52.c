#include <stdio.h>
int potencia(int n1, int n2)
{
    int n;
    n=n1;
    for(; n1 <= n2; n1 *= n1)
    {
        if (n1 == n2)
        {
            printf("%d e uma potencia de %d\n", n2, n);
            return 0;
        }
    }
    printf("%d nao e uma potencia de %d\n", n2, n);
    return 0;
}

int main()
{
    int n1, n2;
    printf("Entre com um numero: ");
    scanf("%d", &n1);
    printf("Entre com um numero: ");
    scanf("%d", &n2);
    potencia(n1,n2);
}
