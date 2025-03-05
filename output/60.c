#include <stdio.h>

// Função para somar os elementos de um array
int somar(int *numeros, int tamanho) {
    int i, soma = 0;
    for (i = 0; i < tamanho; i++) {
        soma += numeros[i]; // Soma os elementos do array
    }
    return soma;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = 5;

    // Chama a função e armazena o resultado
    int soma = somar(numeros, tamanho);

    // Exibe o valor da soma
    printf("O VALOR DA SOMA = %d\n", soma);

    return 0;
}
