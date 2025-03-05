#include <stdio.h>

#define TAMPILHA 10
int pilha[TAMPILHA] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int topo = 0;

void lista_elementos(){
	printf("\n==========Pilha Atual============\n");
	for(int i = topo-1; i >=0; i--){
		printf("-");
		printf("|%d|", pilha[i]);
		printf("-");
	}
	printf("\nTopo: %d", topo);
	printf("\n\n");
}

void push(){
    int num= 0;
    printf("Digite um numero para ser convertido em binario: ");
    scanf("%d",&num);
    while (num>0){
        if (topo<TAMPILHA)
        {
            pilha[topo]=num%2;
            topo++;
            num= num/2;
            
        }else{
            printf("Pilha cheia...\n");
        }
    }
    lista_elementos();
}


void pop(){
    if(topo>0){
        pilha[topo-1]=0;
        topo = topo - 1;
		lista_elementos();
	}else{
		printf("Pilha vazia...\n");
    }
}

void clear(){
	for(int i = 0; i < TAMPILHA; i++){
		pilha[i] = 0;
	}
	topo = 0;
}
int main()
{
    push();
}
