#include <stdio.h>
void inverter(int *num)
{
    *num = *num * (-1);
}
int main()
{
    int num;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &num);
    printf("%d\n", num);
    inverter(&num);
    printf("%d", num);
}
