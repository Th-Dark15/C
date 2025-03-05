#include <stdio.h>
void negativo(int *a)
{
    if (*a<0){
        *a= 0;
    }
}

int main()
{
    int a;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    printf("%d\n",a);
    negativo(&a);
    printf("%d",a);
 
}
