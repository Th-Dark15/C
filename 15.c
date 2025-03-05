#include <stdio.h>
int main(void)
{
    int numero,i, fatorial = 1;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i=1; i<=numero; i++){
        fatorial*=i;

    }
    printf("O fatorial de %d e = %d", numero, fatorial);

}