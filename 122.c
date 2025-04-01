#include <stdio.h>
#include <string.h>

void palindromo(char palavra[]){
    char palavra2[100];
    int len = strlen(palavra);
    for(int i=0;i<len;i++){
        palavra2[i]=palavra[len- 1- i];
    }
    palavra2[len] = '\0';
    if(strcmp(palavra, palavra2) == 0) { 
        printf("A palavra e um palindromo.\n");
    } else {
        printf("A palavra nao e um palindromo.\n");
    }
    
}


int main()
{
    char palavra[100];
    printf("Digite a palavra: ");
    fgets(palavra, sizeof(palavra), stdin);
    palindromo(palavra);
}