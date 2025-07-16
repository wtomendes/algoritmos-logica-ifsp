/*
 * Exercício 5: Cadastro de 10 Alunos
 * 
 * OBJETIVO: Criar um sistema de cadastro para 10 alunos com nome, matrícula e notas.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cadastra 10 alunos com nome, matrícula e duas notas
 * - Exibe todos os dados cadastrados de forma organizada
 * - Utiliza estrutura de dados para organizar as informações
 * 
 * ENTRADAS: Dados de 10 alunos (nome, matrícula, nota1, nota2)
 * SAÍDAS: Lista completa de todos os alunos cadastrados
 * 
 * FUNCIONAMENTO:
 * 1. Define estrutura dados_aluno
 * 2. Loop: cadastra 10 alunos
 * 3. Para cada aluno: solicita nome, matrícula e notas
 * 4. Loop: exibe dados de todos os alunos
 * 5. Formata a saída de forma organizada
 */

#include <stdio.h>
#include <locale.h>
#include <string.h>

// Função para entrada de texto
int input(char prompt[], char vetor[], int tam) {
    fputs(prompt, stdout); 
    fflush(stdin); 
    if (fgets(vetor, tam, stdin)) {
        int i;
        for (i = 0; vetor[i] != '\n' && vetor[i]; ++i)
            ;
        vetor[i] = '\0'; // Remove o \n
        return i;
    } else {
        return -1;
    }
}

// Estrutura para dados do aluno
typedef struct {
    char nome[50];
    char matricula[10];
    double nota1;
    double nota2;
} dados_aluno;

int main() {
    dados_aluno dados_dos_alunos[10];
    int i;

    setlocale(LC_CTYPE, ".UTF8");
    
    // Cadastro dos 10 alunos
    for (i = 0; i < 10; i++) {
        printf("\n--- Cadastro do Aluno %d ---\n", i + 1);
        input("Digite o nome do Aluno: ", dados_dos_alunos[i].nome, sizeof(dados_dos_alunos[i].nome));
        input("Digite a matricula do Aluno: ", dados_dos_alunos[i].matricula, sizeof(dados_dos_alunos[i].matricula));
        printf("Digite a nota 1 do Aluno %d: ", i + 1);
        scanf("%lf", &dados_dos_alunos[i].nota1);
        printf("Digite a nota 2 do Aluno %d: ", i + 1);
        scanf("%lf", &dados_dos_alunos[i].nota2);
        
        // Limpa o buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    // Exibe dados de todos os alunos
    printf("\n=== RELATÓRIO DE ALUNOS ===\n");
    for (i = 0; i < 10; i++) {
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: %s\n", dados_dos_alunos[i].nome);
        printf("Matricula: %s\n", dados_dos_alunos[i].matricula);
        printf("Nota 1: %.2lf\n", dados_dos_alunos[i].nota1);
        printf("Nota 2: %.2lf\n", dados_dos_alunos[i].nota2);
    }

    return 0;
} 