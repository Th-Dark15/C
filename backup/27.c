#include <stdio.h>

int quadrado(int num)
{
    int resultado = num * num;
    return resultado;
}

int main()
{
    int num = 5;
    int resultado = quadrado(num);
    printf("o quadrado do numero: %d e %d", num, resultado);
}