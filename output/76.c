#include <stdio.h>
int eliminar(int *numeros, int tamanho, int *num)
{
    int i,j=0, cont = 0;
    for (i = 0; i < tamanho; i++)
    {
        if (numeros[i] == *num)
        {
            cont++;
        }
        else{
            numeros[j] = numeros[i ];
            j++;
        }
    }
    return cont;
}
int main()
{
    int numeros[] = {1, 2, 3, 4, 5, 6, 9, 8, 9, 10};
    int tamanho = 10;
    int num;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    int cont = eliminar(numeros, tamanho, &num);
    int i;
    for (i = 0; i < tamanho - cont; i++)
    {
        printf("%d\n", numeros[i]);
    }
}
