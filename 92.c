#include <stdio.h>
#include <string.h>

// Struct -> Estrutura do aluno
struct st_aluno {
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunos[5]; // Declaração de um array de 5 alunos

int main() {
    // Entrada de dados dos 5 alunos
    for (int i = 0; i < 5; i++) {
        printf("Informe a matrícula do aluno %d: ", i + 1);
        fgets(alunos[i].matricula, 10, stdin);
        alunos[i].matricula[strcspn(alunos[i].matricula, "\n")] = '\0'; // Remove '\n'

        printf("Informe o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 100, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = '\0'; // Remove '\n'

        printf("Informe o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, 50, stdin);
        alunos[i].curso[strcspn(alunos[i].curso, "\n")] = '\0'; // Remove '\n'

        printf("Informe o ano de nascimento do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].ano_nascimento);
        getchar(); // Limpa o buffer do teclado
    }

    // Exibição dos dados dos 5 alunos
    printf("\n=== Dados dos Alunos ===\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Matrícula: %s\n", alunos[i].matricula);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Curso: %s\n", alunos[i].curso);
        printf("Ano de Nascimento: %d\n", alunos[i].ano_nascimento);
        printf("\n");
    }

    return 0;
}
