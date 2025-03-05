#include <stdio.h>

void transposta(int matriz[][3], int linha, int coluna){
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

    printf("\nAGORA A TRANSPOSTA: ");
    for(int i= 0; i<coluna;i++){
        printf("\n");
        for (int j = 0; j < linha; j++)
        {
            printf("%d", matriz[j][i]);
        }
        
    }
}

int main()
{
    int matriz[2][3]={0};
    int linha = 2;
    int coluna = 3;
    transposta(matriz, linha, coluna);
}
