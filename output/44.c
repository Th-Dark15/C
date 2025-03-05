#include <stdio.h>
void potencia(int a)
{
    int i, a1=a;
    if (a > 0 && a < 10){
        for (i=1;i<10;i++){
            
            printf("%d ^ %d = %d\n", a1,i, a);
            a*=a1;
        }
    }

}

int main()
{
    int a;
    printf("Entre com um numero: ");
    scanf("%d", &a);
    potencia(a);
}
