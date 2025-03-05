#include <stdio.h>
#include <stdlib.h>

int main(){
int qtd,*p;
printf("Digite a quantidade do vetor: ");
scanf("%d",&qtd);

p= (int*)malloc(qtd * sizeof(int));

for(int i=0; i<qtd;i++){
    printf("Digite o valor do vetor na posicao: %d\n",i);
    scanf("%d",&p[i]);
}

for(int i=0; i<qtd;i++){
    printf("O valor do vetor na posicao: %d e de: %d\n",i,p[i]);
}

free(p);
p=NULL;
}
