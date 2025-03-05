#include <stdio.h>

int sequencia(int n)
{
    int i, j;
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j < n; j++)
        {
            printf("\n (%d,%d)", i, j);
        }
    }
    return 1;
}

int main()
{
    int n;
    printf("Digite o termo: ");
    scanf("%d", &n);
    sequencia(n);
}