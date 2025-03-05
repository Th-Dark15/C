#include <stdio.h>
int main(void)
{
    float producao, percentual,x, valor_final;
    int anos=0;
    printf("Digite o valor inicial da sua plantacao: ");
    scanf("%f", &producao);
    printf("Digite o percentual de crescimento anual: ");
    scanf("%f",&percentual);
    x= 1+ percentual/100;
    valor_final= producao;
    while (valor_final< 2*producao)
    {
        valor_final*=x;
        anos++;
        printf("\nO valor e de %f e tem %d ano(s)", valor_final, anos);
    }
    
}

