#include <stdio.h>
#include <string.h>

// Struct -> Estrutura do aluno
struct st_pessoa {
    char nome[100];
    char idade[3];
    char endereco[100];
} pessoa[2]; // Declaração de um array de 5 alunos

int main() {
    // Entrada de dados dos 5 alunos
    for (int i = 0; i < 2; i++) {

        printf("Informe o nome %d: ", i + 1);
        fgets(pessoa[i].nome, 100, stdin);
        pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0'; // Remove '\n'

        printf("Informe a idade  %d: ", i + 1);
        fgets(pessoa[i].idade, 3, stdin);
        pessoa[i].idade[strcspn(pessoa[i].idade, "\n")] = '\0'; // Remove '\n'
        while (getchar() != '\n');

        printf("Informe o endereco %d: ", i + 1);
        fgets(pessoa[i].endereco, 100, stdin);
        pessoa[i].endereco[strcspn(pessoa[i].endereco, "\n")] = '\0'; // Remove '\n'
    }

    // Exibição dos dados dos 5 alunos
    printf("\n=== Dados das Pessoas ===\n");
    for (int i = 0; i < 2; i++) {
        printf("Pessoa %d:\n", i + 1);
        printf("Nome: %s\n", pessoa[i].nome);
        printf("Idade: %s\n", pessoa[i].idade);
        printf("Endereco: %s\n", pessoa[i].endereco);
        printf("\n");
    }

    return 0;
}
