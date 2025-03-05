#include <stdio.h>
#include <stdlib.h>

#define TAMPILHA 10 


char pilha[TAMPILHA][20];
int topo = 0;

void lista_elementos(){
	printf("\n==========Pilha Atual============\n");
	for(int i = topo-1; i >=0; i--){
		printf("-");
		printf("|%s|", pilha[i]);
		printf("-");
	}
	printf("\nTopo: %d", topo);
	printf("\n\n");
}

void push(){

        if (topo<TAMPILHA)
        {
            printf("Digite o valor: ");
            scanf("%s", pilha[topo]);
            topo++;
            
        }else{
            printf("Pilha cheia...\n");
    }
    lista_elementos();
}


void pop(){
    if(topo>0){
        pilha[topo][0] = '\0';
        topo = topo - 1;
		lista_elementos();
	}else{
		printf("Pilha vazia...\n");
    }
}

void clear(){
	for (int i = 0; i < TAMPILHA; i++)
    {
        strcpy(pilha[i], "");  

    }
	topo = 0;
}
int main()
{
    push();
}
