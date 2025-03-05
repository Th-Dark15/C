#include <stdio.h>
void troca(int *num1, int *num2)
{
    int a;
    a = *num1;
    *num1 = *num2;
    *num2 = a;

}

int main()
{
    int num1, num2;
    printf("Entre com um numero: ");
    scanf("%d", &num1);
    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);
    printf("O VALORES INICIAS SAO %d , %d\n", num1, num2);
    troca(&num1, &num2);
    printf("O VALORES ALTERADOS SAO %d , %d", num1, num2);
}
