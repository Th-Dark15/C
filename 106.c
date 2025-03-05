#include <stdio.h>
#include <string.h>

#define TAMFILA 10 


char fila[TAMFILA][20];
int head= 0;
int tail= 0;

void listar(){
    for(int i=0; i<TAMFILA;i++){
        printf("-");
		printf("|%s|", fila[i]);
		printf("-");    
    }
    printf("\nO valor do head e: %d\n", head);
    printf("O valor do tail e: %d\n", tail);

}

void entrada(){
    if (tail<TAMFILA){
        printf("Digite o valor: ");
        scanf("%s", fila[tail]);
        tail++;
        listar();
    }
    else{
        printf("A fila esta cheia...");
    }
}

void tirar(){
	if(head<tail){
        printf("Removendo: %s\n", fila[head]);
        fila[head][0] = '\0';
        head++;
        listar();
    }
    else{
        printf("A fila esta vazia...");
    }
}

void limpar(){
    for (int i = 0; i < TAMFILA; i++)
    {
        strcpy(fila[i], "");  

    }
    head=0;
    tail=0;
    listar();
    
}
int main()
{
    int opcao = 0;

	do{
		printf("Selecione a opcao: \n\n");
		printf("[1] - Inserir (enqueue): \n");
		printf("[2] - Remover (dequeue): \n");
		printf("[3] - Listar: \n");
		printf("[4] - Limpa a fila: \n");
		printf("[-1] - Sair. \n");
		printf("Opcao: ");
		scanf("%d", &opcao);

		switch(opcao){
		case 1:
			entrada();
			break;
		case 2:
			tirar();
			break;
		case 3:
			listar();
			break;
		case 4:
			limpar();
			break;
		case -1:
			break;
		default:
			printf("Opcao invalida.");
		}

	}while(opcao != -1);

}
