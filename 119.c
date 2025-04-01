#include <stdio.h>
#include <string.h>

#define TAM 50

struct produtos {
    char produto_cadastro[TAM];
    float preco;
};

typedef struct produtos produtos;

int cadastrar(produtos lista[], int *qtd) {
    if (*qtd >= TAM) {
        printf("O vetor já está cheio...\n");
        return 0;
    }

    printf("Digite o nome do produto que deseja cadastrar: ");
    getchar();
    fgets(lista[*qtd].produto_cadastro, TAM, stdin);
    lista[*qtd].produto_cadastro[strcspn(lista[*qtd].produto_cadastro, "\n")] = '\0'; 
    printf("Digite o valor do produto: ");
    scanf("%f", &lista[*qtd].preco);

    (*qtd)++;

    return 1;
}

void listar(produtos lista[], int *qtd) {
    for (int i = 0; i < *qtd; i++) {
        printf("Produto: %s [%d] | Preço: %.2f\n", lista[i].produto_cadastro, i, lista[i].preco);
    }
}

int comprar(produtos lista[], int *qtd) {
    listar(lista, qtd);
    int qtd_produto, indice;
    int resposta;

    printf("Digite o índice do produto que deseja: ");
    scanf("%d", &indice);
    
    if (indice < 0 || indice >= *qtd) {
        printf("Índice inválido!\n");
        return 0;
    }

    printf("Digite a quantidade que deseja: ");
    scanf("%d", &qtd_produto);

    printf("Foi adicionado ao seu carrinho de compras: %d de %s.\n", qtd_produto, lista[indice].produto_cadastro);
    printf("Total do produto: R$ %.2f\n", lista[indice].preco * qtd_produto);

    printf("Deseja finalizar a compra? [1] - SIM [0] - NÃO: ");
    scanf("%d", &resposta);

    if (resposta == 1) {
        printf("Compra finalizada! Total a pagar: R$ %.2f\n", lista[indice].preco * qtd_produto);
        return -1; 
    }
    
    return 0;
}

int main(void) {
    produtos lista_produtos[TAM];
    int qtd = 0;
    int escolha = 0;

    while (escolha != -1) {
        printf("\nSeja Bem-Vindo ao mercado! O que deseja?\n");
        printf("[1] - Cadastrar\n");
        printf("[2] - Listar\n");
        printf("[3] - Comprar\n");
        printf("[-1] - Sair\n");
        printf("Opção: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cadastrar(lista_produtos, &qtd);
                break;
            case 2:
                listar(lista_produtos, &qtd);
                break;
            case 3:
                if (comprar(lista_produtos, &qtd) == -1) {
                    escolha = -1; // Sai do loop
                }
                break;
            case -1:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    }

    return 0;
}