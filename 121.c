#include <stdio.h>

int troca(int linha, int coluna, int matriz[linha][coluna], int vetor1[coluna], int vetor2[coluna])
{
    int c1, c2;
    printf("Digite a primeira coluna: ");
    scanf("%d", &c1);
    printf("Digite a primeira coluna: ");
    scanf("%d", &c2);
    if ((c1 > coluna) || (c2 > coluna))
    {
        return 1;
    }
    for (int i = 0; i < linha; i++)
    {
        vetor1[i]= matriz[i][c1-1];
    }
    for (int i =0; i < linha; i++)
    {
        vetor2[i]= matriz[linha - 1 - i][c2-1];
    }
    for(int i=0;i<linha;i++){
        matriz[i][c1-1]=vetor2[i];
        matriz[i][c2-1]=vetor1[i];
    }
    
    return 0;        
    
}
int main()
{
    int matriz[6][5] = {
        {1, 3, 5, 7, 9},
        {4, 6, 5, 8, 0},
        {3, 4, 5, 7, 8},
        {5, 9, 1, 2, 3},
        {7, 1, 5, 3, 5},
        {4, 0, 2, 1, 5}};

    int coluna = 5;
    int linha = 6;
    int vetor1[coluna];
    int vetor2[coluna];
   

        troca(linha, coluna, matriz, vetor1, vetor2);
}