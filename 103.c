#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
int qtd;

printf("Digite o valor da string: ");
scanf("%d",&qtd);

char *palavra = malloc((qtd + 1) * sizeof(char));

printf("Digite a string: ");
scanf(" %s",palavra);

///printf("%s", palavra);

for(int i=0;i<qtd;i++){
    if (!strchr("aeiouAEIOU", palavra[i])) {
        printf("%c ",palavra[i]);
    }
    
}

free(palavra);
palavra=NULL;
}
