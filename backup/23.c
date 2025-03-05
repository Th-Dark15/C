#include <stdio.h>
int main(void)
{
    int numero,i,x=0;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    for (i=1;i<numero;i++){
        if (numero %i == 0){
            x++;
            if (x>2){
                break;
            }
        }
    }
    if (x>2){
        printf("O numero= %d nao e primo",numero);
    }
    else{
        printf("O numero= %d e primo",numero);
    }
}

