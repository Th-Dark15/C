#include <stdio.h>

int main()
{
    FILE *arq;

    // w leitura
    // r escrita
    // wa adicionar conteudo
    arq= fopen("arquivo.txt", "w");

    // sempre fechar o arquivo depois de usar
    fclose(arq);
    
}
