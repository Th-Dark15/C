#include <stdio.h>

int mmc(int n1, int n2)
{
    int i= 1, m=0;
    while (n1< 1 && n2<1)
    {
       if (n1%i == 0 && n2%i == 0){
        m*=i;
       }
       i++;
    }
    printf("%d",m);
    return 1;
    
}

int main()
{
    int n1,n2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    mmc(n1,n2);
}