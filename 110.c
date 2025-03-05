#include <stdio.h>

void select(int vetor[], int tam){
int menor, troca;
for(int i=0;i<(tam-1);i++){
    menor= i;
    for (int j = i+1; j < tam; j++)
    {
        if(vetor[j]<vetor[menor]){
            menor=j;
        }    
    }
    if(i!=menor){
        troca= vetor[i];
        vetor[i]= vetor[menor];
        vetor[menor]= troca;
    }
    
}

}

int main()
{
    int vetor[6]={40,50,14,3,77,8};

    select(vetor,6);

    for (int i = 0; i < 5; i++)
    {
        printf("O valor do vetor e: %d\n",vetor[i]);
    }
    
}
