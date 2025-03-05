#include <stdio.h>
#include <stdlib.h>

int main(){
int *p, qtd;


p= (int*)malloc(3 * sizeof(int));

printf("Digite o tamanho do vetor: ");
scanf("%d",&qtd);

if (qtd>3)
{
    p= (int*)realloc(p , sizeof(int)*qtd);

}


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
