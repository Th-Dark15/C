#include <stdio.h>

int soma(int n){
    if (n == 0) // Condição de parada
        return 0;
    return n + soma(n-1);
}
int main()
{
   int n;
   printf("Digite um numero: ");
   scanf("%d",&n);
   printf("A soma = %d e de %d", n , soma(n));

}
