#include <stdio.h>

void funcao(int num){
    if (num<=0) {
        return;
    }
        printf("%d \n", num%2);

    funcao(num/2);
}


int main()
{
    int num;
    printf("Digite o numero: ");
    scanf("%d",&num);
    funcao(num);
    
}
