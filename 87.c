#include <stdio.h>

int main()
{
    int numeros=2;
    numeros= numeros << 2;
    printf("%d\n", numeros);
    numeros=2;
    numeros= numeros >> 1;
    printf("%d\n", numeros);
    numeros=2;
    numeros= ~numeros;
    printf("%d\n", numeros);
    
}
