#include <stdio.h>

void soma(int n, int *soma,float *media)
{
    int i,soma1=0, cont=0;
    for(i=1;i<=n;i++){
        if(n%i==0){
            soma1+=i;
            cont++;
        }
    }
    *soma= soma1;
    *media= (float)soma1/cont;;
    
    
}

int main()
{
    int n,sm;
    float med;
    printf("Digite o numero: ");
    scanf("%d", &n);
    soma(n,&sm, &med);
    printf("a soma dos divisores %d",sm);
    printf("\n a media e %.2f",med);
}