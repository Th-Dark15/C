#include <stdio.h>

int main()
{
    int numeros[6]= {1,0,5,-2,-5,7};
       

    int soma= numeros[0]+numeros[1]+numeros[5];
     printf("A soma e : %d\n",soma);
numeros[4]=100;
int i;
for(i=0; i<6;i++){
    printf("%d\n",numeros[i]);
}
}
