#include <stdio.h>
void troca(int *a, int *b)
{
    int temp;
    temp= *a;
    *a= *b;
    *b= temp;
}

int main()
{
    int a, b;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    printf("Entre com um numero: ");
    scanf("%d", &b);
    printf("%d, %d\n",a,b);
    troca(&a,&b);
    printf("%d, %d",a,b);
}
