#include <stdio.h>

int converter(float temperatura)
{
    float fah = 0;
    fah = (temperatura * 1.8) + 32;
    printf("A temperatura em Fahrenheit e %.2f", fah);
    return 1;
}

int main()
{
    float temperatura;
    printf("Digite a temperatuda: ");
    scanf("%f", &temperatura);
    converter(temperatura);
}