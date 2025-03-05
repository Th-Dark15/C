#include <stdio.h>

int divisores(int a, int b, int n)
{
    int i, maior, menor, j=0,x;
    if (a>b){
     maior=a;  
     menor = b;
    }
    else{
        maior=b;
        menor= a;
    }
    for(i=menor;i<=maior;i++){
        if ((n%x==0) && (i%x==0)){
            printf("%d",j);
            j++;
        }
    }
    return j;
}

int main()
{
    int a, b, n;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);
    printf("Digite o termo: ");
    scanf("%d", &n);
    divisores(a,b,n);
}