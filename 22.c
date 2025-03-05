#include <stdio.h>
int main(void)
{
    int i, resultado = 0, j;
    for (i = 1; i < 10; i++)
    {

        for (j = 0; j <= 10; j++)
        {
            resultado = i * j;
            printf("\n%d * %d = %d", i, j, resultado);
        }
        printf("\n");
    }
}
