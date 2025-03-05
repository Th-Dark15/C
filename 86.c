#include <stdio.h>

int main()
{
    int numeros[10]= {1,2,-7,5,8,-66,14,-25,84,-67};
    int i ;

    for(i=0;i<10;i++){
    if(numeros[i]<0) 
    {
        numeros[i]=0;

    }
}

    for(i=0;i<10;i++){
    printf("%d\n",numeros[i]); } 
}
