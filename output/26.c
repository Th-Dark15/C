#include <stdio.h>

// Função que soma dois números
int somar(int a, int b) {
    int resultado = a + b;
    return resultado;  // Retorna a soma
}

int main() {
    int num1 = 5, num2 = 3;
    int soma = somar(num1, num2);  // Chama a função somar
    printf("A soma é: %d\n", soma);  // Exibe o resultado
    return 0;
}
