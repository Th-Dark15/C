#include <stdio.h>

void insert(int vetor[], int tam){
int proximo, troca;
for(int i=1;i<tam;i++){
    proximo=i;
    while ((proximo!=0)&&(vetor[proximo]< vetor[proximo-1]))
    {
        troca= vetor[proximo];
        vetor[proximo]= vetor[proximo-1];
        vetor[proximo-1]= troca;
        proximo--;
    }
    
    
    
}

}

int main()
{
    int vetor[6]={40,50,14,3,77,8};

    insert(vetor,6);

    for (int i = 0; i < 5; i++)
    {
        printf("O valor do vetor e: %d\n",vetor[i]);
    }
    
}
