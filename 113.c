#include <stdio.h>

int procurar(int matriz[][3], int linha, int coluna){
    for(int i= 0; i<linha;i++){
        for (int j = 0; j < coluna; j++)
        {
            printf("Digite os valores para preencher a matriz: ");
            scanf("%d",&matriz[i][j]);
        }
        
    }
    int linha_procurar, num;
    printf("Digite o numero que deseja procurar: ");
    scanf("%d",&num);
    printf("Digite a linha que deseja procurar: ");
    scanf("%d",&linha_procurar);
 
        for (int j = 0; j < coluna; j++)
        {
            if(num==matriz[linha_procurar][j])
            {
                printf("ENCONTRADO O NUMERO %d", num);
                return 1;
            }
                
        }
        
    printf("NAO FOI ENCONTRADO O NUMERO %d", num);
                return 0;
}

int main()
{
    int matriz[2][3]={0};
    int linha = 2;
    int coluna = 3;
    procurar(matriz, linha, coluna);
}
