#include <stdio.h>
void dobrar(int *a)
{
    *a*=*a;
}

int main()
{
    int a;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    printf("%d\n",a);
    dobrar(&a);
    printf("%d",a);
 
}
