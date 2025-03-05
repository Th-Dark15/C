#include <stdio.h>

int transposta(int matriz[][3], int linha, int coluna){
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

    for(int i=0; i<linha; i++){
        for (int j = i + 1; j < coluna; j++)
        {
            if(matriz[i][j]!=matriz[j][i]){
                printf("\nA matriz não é simétrica.");
                return 0;
            }
            
        }
        
        
    }
    printf("\nA matriz e simetrica");
    return 1;
}

int main()
{
    int matriz[3][3]={0};
    int linha = 3;
    int coluna = 3;
    if(linha==coluna){
        transposta(matriz, linha, coluna);
    }
    else{
        printf("Nao e possivel a matriz tem que ser quadrada.");
    }
    
}
