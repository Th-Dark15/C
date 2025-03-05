#include <stdio.h>
#include <stdlib.h>

int main(){
int *p, qtd;
printf("Digite o tamanho do vetor: ");
scanf("%d",&qtd);

p= (int*)malloc(qtd * sizeof(int));

for(int i=0;i<qtd;i++){
    printf("Digite o valor de p[%d] \n",i);
    scanf("%d",&p[i]);
}
for ( int i = 0; i < qtd; i++)
{
    printf("%d\n",p[i]);
}

free(p);
p=NULL;
}
