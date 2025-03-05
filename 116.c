#include <stdio.h>

void transposta(int matriz[][4], int linha, int coluna, int vetor[]){
    for(int i= 0; i<linha;i++){
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite os valores para preencher a matriz: ");
            scanf("%d",&matriz[i][j]);
        }
        
    }
    for(int i= 0; i<linha;i++){
        printf("\n");
        for (int j = 0; j < coluna; j++)
        {
            printf("%d", matriz[i][j]);
        }   
    }

    for(int i=0;i<coluna;i++){
        int soma= 0;
        for (int j = 0; j < linha; j++)
        {
            soma += matriz[j][i];
        }
        vetor[i]= soma;
    }
    for(int i= 0 ; i <coluna;i++){
        printf("O vetor na posicao[%d] tem o valor de %d \n", i, vetor[i]);
    }
   
}

int main()
{
    int matriz[3][4]={0};
    int linha = 3;
    int coluna = 4;
    int vetor[coluna];
    transposta(matriz, linha, coluna, vetor);
}
