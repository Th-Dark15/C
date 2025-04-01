#include <stdio.h>

void funcao(int num, int num2, int i){
    
    int mult= num * i;
    if (mult > num2) {
        return;
    }
    printf("%d * %d = %d\n", num, i, mult);
    funcao(num,num2, i+1);

}


int main()
{
    int num, num2;
    printf("Digite o numero: ");
    scanf("%d",&num);

    printf("Digite o numero limite: ");
    scanf("%d",&num2);

    int i= 1;
    funcao(num, num2, i);
    
}
