#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void gerar_vetor(int *numeros, int tamanho, int min, int max) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = min + rand() % (max - min + 1);
    }
}
int main() {
    int tamanho = 10;
    int numeros[tamanho];
    int min = 1, max = 100;
    srand(time(NULL)); // Inicializa o gerador de números aleatórios
    gerar_vetor(numeros, tamanho, min, max);
    printf("Vetor gerado:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
