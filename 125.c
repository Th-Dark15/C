#include <stdio.h>

void funcao(int num, int razao, int n, int i){
    if (i==n) {
        return;
    }
        printf("%d\n",num);
        num = num* razao;
        funcao(num, razao, n, i+1);
}


int main()
{
    int num,razao, i=0, n;
    printf("Digite o primeiro termo: ");
    scanf("%d",&num);
    printf("Digite razao: ");
    scanf("%d",&razao);
    printf("Digite o limite: ");
    scanf("%d",&n);
    funcao(num,razao, n, i);
    
}
