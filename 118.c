#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void numero_aleatorio(int *numero, int *numero2) {
    *numero = (rand() % 10) + 1;
    *numero2 = (rand() % 10) + 1; 
}

void facil() {
    int numero, numero2, soma, resp, score = 0;
    
    while (1) {  // Loop para repetir o jogo até o usuário decidir parar
        numero_aleatorio(&numero, &numero2);
        soma = numero + numero2;

        printf("Qual e o valor da soma de %d + %d: ", numero, numero2);
        scanf("%d", &resp);

        while (resp != soma) {
            printf("Poxa, voce errou! Tente novamente: \n");
            printf("Qual e o valor da soma de %d + %d: ", numero, numero2);
            scanf("%d", &resp);
        }

        printf("Parabens, voce acertou! A resposta e: %d\n", resp);
        score++;

        int resp2;
        printf("Deseja continuar? [1] - Sim | [2] - Nao: ");
        scanf("%d", &resp2);

        if (resp2 != 1) {
            printf("Obrigado por jogar! Seu score foi de: %d\n", score);
            return;
        }
    }
}

void medio() {
    
    int numero, numero2, subtracao, resp, score = 0, guardar;
    
    while (1) {  // Loop para repetir o jogo até o usuário decidir parar
        numero_aleatorio(&numero, &numero2);
        if(numero2>numero){
            guardar= numero;
            numero= numero2;
            numero2= guardar;
        }
        
        subtracao = numero - numero2;

        printf("Qual e o valor da subtracao de %d - %d: ", numero, numero2);
        scanf("%d", &resp);

        while (resp != subtracao) {
            printf("Poxa, voce errou! Tente novamente: \n");
            printf("Qual e o valor da subtracao de %d - %d: ", numero, numero2);
            scanf("%d", &resp);
        }

        printf("Parabens, voce acertou! A resposta e: %d\n", resp);
        score++;

        int resp2;
        printf("Deseja continuar? [1] - Sim | [2] - Nao: ");
        scanf("%d", &resp2);

        if (resp2 != 1) {
            printf("Obrigado por jogar! Seu score foi de: %d\n", score);
            return;
        }
    }
}

void mult() {
    int numero, numero2, multiplicar, resp, score = 0;
    
    while (1) {  // Loop para repetir o jogo até o usuário decidir parar
        numero_aleatorio(&numero, &numero2);
        multiplicar = numero * numero2;

        printf("Qual e o valor da multiplicacao de %d * %d: ", numero, numero2);
        scanf("%d", &resp);

        while (resp != multiplicar) {
            printf("Poxa, voce errou! Tente novamente: \n");
            printf("Qual e o valor da multiplicacao de %d * %d: ", numero, numero2);
            scanf("%d", &resp);
        }

        printf("Parabens, voce acertou! A resposta e: %d\n", resp);
        score++;

        int resp2;
        printf("Deseja continuar? [1] - Sim | [2] - Nao: ");
        scanf("%d", &resp2);

        if (resp2 != 1) {
            printf("Obrigado por jogar! Seu score foi de: %d\n", score);
            return;
        }
    }
}

int main (void){
    srand(time(NULL)); 
    int num1, num2;
int dificuldade;
printf("Digite a dificuldade que deseja: \n");
printf("[1]-facil:\n");
printf("[2]-medio\n");
printf("[3]-dificil: \n");
printf("Opcao: ");
scanf("%d",&dificuldade);
switch(dificuldade){
    case 1:
        numero_aleatorio(&num1, &num2);
        facil();
        break;
    case 2:
        numero_aleatorio(&num1, &num2);
        medio();
        break;
    case 3:
        numero_aleatorio(&num1, &num2);
        mult();
        break;
    case -1:
        break;
    default:
        printf("Opcao invalida.");
    }

}