#include <stdio.h>

void preencher(int matriz[][5], int linha, int coluna){
    int inicio= 1;
    for(int i= 0; i<linha;i++){
        inicio= 1 + i;
        printf("\n");
        for (int j = 0; j < coluna; j++)
        {
            matriz[i][j]= inicio;
            inicio++;
            printf("%d ",matriz[i][j]);
        }
        
    }
    
}

int main()
{
    int matriz[5][5]={0};
    int linha = 5;
    int coluna = 5;
    preencher(matriz, linha, coluna);
}
