#include <stdio.h>

int main()
{
    FILE *arq;
    arq= fopen("academia.txt" , "w");
    char exercicio[10];
    
    if(arq){
        printf("Informe o nome do exercicio\n");
        fgets(exercicio,10,stdin);
        while (exercicio[0]!= '0')
        {
            fputs(exercicio,arq);
            printf("Informe o nome do exercicio\n");
        fgets(exercicio,10,stdin);
        }
        
    }
    else{
        printf("Nao foi possivel");
    }
    fclose(arq);
}
