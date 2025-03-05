#include <stdio.h>
int contador(int *numeros, int tamanho, int valor)
{
    int i, cont=0;
    for(i=0;i<tamanho;i++){
        if (valor==numeros[i]){
            cont++;
        }
    }
    return cont;
}
int main()
{
    int numeros[] = {2, 3, 2, 4, 2};
    int tamanho = 5;
    int valor;
    printf("Digite o valor que deseja procurar no vetor: ");
    scanf("%d", &valor);
    int cont = contador(numeros, tamanho, valor);
    printf("A quantidade de %d e de %d",valor, cont);
}
