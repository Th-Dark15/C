#include <stdio.h>

int multiplos(int a, int b)
{
    int valor, i=1;
    valor = a-b;

    while (i<=valor){
        if (valor%i == 0){
            printf("O numero %d e multiplo de %d\n",i, valor);
            
        }
        i++;
        
    }
    return 1;
}

int main()
{
    int a,b;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero numero: ");
    scanf("%d", &b);
    multiplos(a,b);
}