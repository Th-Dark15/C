#include <stdio.h>

int primos(int n)
{
    int i,j,x;
    for(i=2;i<n;i++){
        x=0;
        for(j=1;j<=i;j++)
            if (i%j==0){
                x++;
                }
            
        if(x==2){
            printf("\n%d",i);
         }
    }
    return 1;
}

int main()
{
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    primos(n);
}