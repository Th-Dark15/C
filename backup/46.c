#include <stdio.h>
void ocorrencia(int vetor[], int tamanho, int num)
{
    int i, cont=0;
    for(i=0;i<tamanho;i++){
        if(num==vetor[i]){
            cont++;
        }
    }
    printf("O valor de ocorrencias do numero = %d foi de = %d",num, cont);
}

int main()
{
    int num, vetor[10]= {3, 7, 1, 7, 0, 4, 6, 7, 8, 5}, tamanho;
    printf("Entre com um numero: ");
    scanf("%d", &num);
    tamanho= 10;
    
    ocorrencia(vetor,tamanho, num);
}
