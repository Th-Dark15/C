#include <stdio.h>

int fib(int n){
    if (n==0){
        return 0;
    }
    if (n==1)
    {
        return 1;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
   int quant;
   printf("Digite o tamanho da sequencia: ");
   scanf("%d",&quant);
   for(int i =0; i<quant; i++){
    printf("%d ", fib(i+1));
   }

    
}
