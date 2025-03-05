#include <stdio.h>
void sequencia(int *num)
{
    int i, j;
    for (i = *num; i > 0; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
    }
}
int main()
{
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    sequencia(&num);
}
