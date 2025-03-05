#include <stdio.h>

int par_impar(int num)
{
    if (num % 2 ==0){
        printf("O numero e par");
        return 1;
    }
    else{
        printf("O numero e impar");
        return 0;
    }
}

int main()
{
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    par_impar(numero);

}