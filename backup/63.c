
#include <stdio.h>
void contagem(int *numeros, int tamanho, int valor)
{
   int i, cont=0;
   for(i=0;i<tamanho;i++)
   {
    if (valor==numeros[i]){
        cont++;
    }
   }
   printf("O valor %d aparece %d vezes",valor,cont);
}
int main()
{
    int numeros[] = {2, 3, 2, 4, 2};
    int tamanho = 5;
    int valor;
    printf("Entre com um numero: ");
    scanf("%d", &valor);
    contagem(numeros, tamanho,valor);
    
}
