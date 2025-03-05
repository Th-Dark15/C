#include <stdio.h>
void exibirnumeros(int n, int a, int b){
    int i;
    for (i=a;i<=b;i++){
        if (i%n!=0){
            printf("%d ",i);
        }
    }
    
}

int main()
{
    int n,a,b;
    printf("entre com um numero: ");
    scanf("%d",&n);
    
    printf("entre com um numero: ");
    scanf("%d",&a);
    
    printf("entre com um numero: ");
    scanf("%d",&b);
    
    exibirnumeros(n,a,b);
    
    
}

