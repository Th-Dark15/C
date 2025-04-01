#include <stdio.h>

int soma(int linha,int coluna, int matriz[linha][coluna]){
    int soma_diagonal=0;
    int soma_superior=0;
    int soma_inferior=0;
    for(int i=0;i<linha;i++){
        for(int j=i+1;j<coluna;j++){
            soma_superior+=matriz[i][j];
        }
    }
    for(int i=0;i<coluna;i++){
        for(int j=i+1;j<linha;j++){
            soma_inferior+=matriz[i][j];
        }
    }
    for(int i=0;i<linha;i++){
            soma_diagonal+=matriz[i][i];
            printf("%d\n",soma_diagonal);
    }

    if ((soma_superior == soma_inferior) && (soma_superior == soma_diagonal)) {
        return 1;
    }
    return 0;
    
}

int main()
{
    int matriz[5][5]={
        {6,3,1,2,6},
        {1,3,5,4,2},
        {3,4,4,2,2},
        {5,9,1,9,3},
        {4,0,2,1,8}
    };

    int coluna=5; 
    int linha=5;

    soma( linha,coluna, matriz);
}