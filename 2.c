#include<stdio.h>
int main (void)
{
float valor_investido, rendimento,valor_investido2;
int anos , anos_total;
printf("Digite o valor investido: ");
scanf("%f", &valor_investido);
printf("Digite o rendimento por mes: ");
scanf("%f", &rendimento);
printf("Digite quantos anos quer simular: ");
scanf("%d", &anos);
anos_total= anos*12;
valor_investido2= (valor_investido*(rendimento/100)) * anos_total;
printf("O rendimento inicial de %f com rendimento mensal de %f com %d anos resultou em %f ", valor_investido,rendimento, anos, valor_investido2);
}