#include <stdio.h>
int main(void)
{
    float valor_inicial, percentual, x=0, valor_final;
    int anos=0;
    printf("Digite o valor inicial da producao: ");
    scanf("%f", &valor_inicial);
    printf("Digite o percentual: ");
    scanf("%f", &percentual);
    x = 1+ percentual / 100;
    valor_final = valor_inicial;
     while (valor_final < 2 * valor_inicial) {
        valor_final *= x;
        anos++;
        printf("Ano %d: valor da producao = %.2f\n", anos, valor_final);
    }
    printf("O valor final e de %f", valor_final);
}

