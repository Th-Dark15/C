#include <stdio.h>

int main()
{
    int numeros[2] [2];
    numeros [0] [0] = 1;
    numeros [0] [1] = 2;
    numeros [1] [0] = 3;
    numeros [1] [1] = 4;
int i, j;
for (i=0;i<2;i++){
    for(j=0 ; j<2; j++){
    printf("%d\n", numeros[i][j]);
    }
}
    
}
