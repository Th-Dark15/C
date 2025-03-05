#include <stdio.h>

int main()
{
    int i, vetor[5], x=0;

    for (i = 0; i < 5; i++)
    {
        printf("Entre com um numero: ");
        scanf("%d", &vetor[i]); 
        x+=vetor[i];
        printf("%d\n",x);
    }
}
