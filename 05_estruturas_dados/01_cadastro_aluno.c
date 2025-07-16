/*
 * Exercício 1: Cadastro de Aluno usando Struct
 * 
 * OBJETIVO: Criar um sistema de cadastro de aluno usando estruturas (struct).
 * 
 * O QUE O CÓDIGO FAZ:
 * - Define uma estrutura Aluno com nome, matrícula e média
 * - Solicita dados do aluno ao usuário
 * - Armazena os dados na estrutura
 * - Exibe os dados cadastrados
 * 
 * ENTRADAS: Nome, matrícula e média do aluno
 * SAÍDAS: Dados do aluno formatados
 * 
 * FUNCIONAMENTO:
 * 1. Define estrutura Aluno com campos necessários
 * 2. Declara variável do tipo Aluno
 * 3. Solicita e armazena cada campo
 * 4. Exibe todos os dados formatados
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

// Estrutura para armazenar dados do aluno
typedef struct Aluno {
    char nome[50];
    int matricula;
    float media;
} Aluno;

int main() {
    setlocale(LC_CTYPE, ".UTF8");

    Aluno aluno; // Criando variável do tipo Aluno

    // Entrada dos dados
    input("Digite o nome do aluno: ", aluno.nome, sizeof(aluno.nome));

    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Media do aluno: ");
    scanf("%f", &aluno.media);

    // Exibindo os dados
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Média: %.2f\n", aluno.media);

    return 0;
} 