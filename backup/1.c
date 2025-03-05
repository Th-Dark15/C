#include<stdio.h>
int main (void)
{
int n_min, n_max, n_inicial;
printf("Digite o numero minimo: ");
scanf("%d", &n_min);
printf("Digite o numero maximo: ");
scanf("%d", &n_max);
n_inicial= n_max;
while(n_max>0)
{
    printf("n_min: %d\n", n_min);
    n_min+=1;
    printf("n_max: %d\n", n_max);
    n_max-=1;
}
return 0;
}