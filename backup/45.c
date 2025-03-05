#include <stdio.h>
void somatorio1(int n)
{
    int i, j, p_valor;

    for (i = n, j = 1; i > 1 && j <= n; i--, j++)
    {
        printf("i = %d, j = %d\n", i, j);
    }
}

void fatorial(int n){
    int i, fat;
    for (i=1; i<=n; i++){
        fat *= i;
    }
}

void somatorio2(int n){
    int exp;
    exp = n-1;
    fatorial(exp);

}

int main()
{
    int n;
    printf("Entre com um numero: ");
    scanf("%d", &n);
    somatorio1(n);
    fatorial(n);
}
