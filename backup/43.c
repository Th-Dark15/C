#include <stdio.h>
void logaritamo(int *a, int *b)
{
    int cont = 0, a1=*a;
    while (*a <= *b)
    {
        *a *= a1;
        cont++;
    }
    printf("O valor de a e %d\n", *a);
    printf("O valor de cont e %d", cont);
}

int main()
{
    int a, b;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    printf("Entre com um numero: ");
    scanf("%d", &b);
    logaritamo(&a, &b);
}
