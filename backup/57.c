#include <stdio.h>
void mudar(int *num)
{
    *num=10;
}

int main()
{
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    mudar(&num);
    printf("%d",num);
}
