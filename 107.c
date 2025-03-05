#include <stdio.h>
#include <stdlib.h>

#define TAMFILA 10

//File / Queue


int *fila = NULL;
int qtd= 0;
int head = 0; //próximo a ser atendido
int tail = 0; //último da fila

void lista_elementos(){
	printf("\n========FILA ATUAL===========\n");
	for(int i = 0; i < TAMFILA; i++){
		printf("-");
		printf("|%d|", fila[i]);
		printf("-");
	}
	printf("\nHead: %d\n", head);
	printf("Tail: %d\n", tail);
	printf("\n\n");
}
void criar_fila(){
    printf("Digite o tamanho do vagao: ");
    scanf("%d",&qtd);
    fila = (int*)malloc(qtd * sizeof(int));
    for (int i = 0; i < qtd; i++)
    {
        fila[i]=0;
    }
    head=0;
    tail=0;
    
}
void enqueue(){
	int val;
    
	if(tail < TAMFILA){
		printf("Informe o elemento para adicionar na fila: ");
		scanf("%d", &val);
		fila[tail] = val;
		tail = tail + 1;
		lista_elementos();
	}else{
		printf("A fila está cheia...\n");
	}
}

void dequeue(){
	if(head < tail){
		fila[head] = 0;
		head = head + 1;
		lista_elementos();
	}else{
		printf("A fila está vazia...\n");
	}
}

void clear(){
	for(int i = 0; i < TAMFILA; i++){
		fila[i] = 0;
	}
	head = 0;
	tail = 0;
}



int main(){

	int opcao = 0;
    criar_fila();
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
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			lista_elementos();
			break;
		case 4:
			clear();
			break;
		case -1:
			break;
		default:
			printf("Opcao invalida.");
		}

	}while(opcao != -1);

	return 0;
}
