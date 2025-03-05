#include <stdio.h>

int main()
{
    int numeros[10]= {1,2,7,5,8,66,14,25,84,67};
int pares=0;
int i ;
for(i=0;i<10;i++){
    if(numeros[i]%2==0) 
    {
        printf("%d\n",numeros[i]);
        pares++;
    }
}

        printf("A quantidade de numeros pares sao: %d\n",pares);

}
