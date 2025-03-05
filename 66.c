#include <stdio.h>
void calcular(int num1, int num2, int *soma, int *sub)
{
    *soma = num1 + num2;
    *sub = num1 - num2;
}
int main()
{
    int num1, num2, soma, sub;
    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);
    calcular(num1, num2, &soma, &sub);
    printf("A soma e= %d e a subtracao e= %d", soma, sub);
}
