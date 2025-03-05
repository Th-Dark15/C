#include <stdio.h>

int mult(int n){
    if (n == 0 || n == 1) // Condição de parada
        return 1;
    return n *  mult(n-1);
}
int main()
{
   int n;
   printf("Digite um numero: ");
   scanf("%d",&n);
   printf("O fatorial = %d e de %d", n , mult(n));

}
