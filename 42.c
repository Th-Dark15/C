#include <stdio.h>

void potencias(int a, int b, int *quant, int *maior) {
    int i = a, cont = 0, ma = a;
    
    while (i <= b) {
        ma = i;
        cont++;
        i *= 2;
    }
    
    *maior = ma;
    *quant = cont;
}

int main() {
    int a, b, quant, maior;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &a);

    printf("Entre com o segundo numero: ");
    scanf("%d", &b);

    potencias(a, b, &quant, &maior);

    printf("Quantidade de potencias no intervalo: %d\n", quant);
    printf("Maior potencia de 2 dentro do intervalo: %d\n", maior);

    return 0;
}
