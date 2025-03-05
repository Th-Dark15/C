#include<stdio.h>
int main (void)
{
int total_digitado,x;
float numero, soma=0;
total_digitado= 5;
x= 0;
while (x<total_digitado) { 
    printf("Digite um numero: ");
    scanf("%f", &numero);
    x+=1;
    if (numero<0)
    {
        printf("O numero %f e negativo \n",numero);
    }
    soma+=numero;
}
printf("A soma dos numeros: %f",soma);

}