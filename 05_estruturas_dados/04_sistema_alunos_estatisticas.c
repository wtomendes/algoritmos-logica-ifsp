/*
 * Exercício 4: Sistema de Alunos com Estatísticas
 * 
 * OBJETIVO: Criar um sistema de cadastro de alunos com cálculo de estatísticas da turma.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cadastra 5 alunos com nome e duas notas
 * - Calcula média individual e status (aprovado/reprovado)
 * - Calcula estatísticas da turma (média geral, aprovados, reprovados)
 * - Exibe dados completos de cada aluno e resumo da turma
 * 
 * ENTRADAS: Dados de 5 alunos (nome, nota1, nota2)
 * SAÍDAS: Dados individuais e estatísticas da turma
 * 
 * FUNCIONAMENTO:
 * 1. Define estrutura Aluno e função de cálculo de média
 * 2. Loop: cadastra 5 alunos
 * 3. Para cada aluno: calcula média e status
 * 4. Atualiza estatísticas da turma
 * 5. Exibe dados individuais e resumo final
 */

#include <stdio.h>
#include <locale.h>
#include <string.h>

double calculo_media(double nota1, double nota2) {
    return (nota1 + nota2) / 2.0;
}

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

typedef struct Aluno {
    char nome[50];
    double nota1;
    double nota2;
    char status[10]; // "Aprovado" ou "Reprovado"
} Aluno;

int main() {
    double media_geral = 0.0;
    int aprovados = 0;
    int reprovados = 0;
    setlocale(LC_CTYPE, ".UTF8");

    Aluno aluno[5]; // Array de 5 alunos
    
    // Cadastro dos alunos
    for (int i = 0; i < 5; i++) {
        printf("\n--- Dados do Aluno %d ---\n", i + 1);
        input("Digite o nome do aluno: ", aluno[i].nome, sizeof(aluno[i].nome));

        printf("Digite a nota 1 do aluno: ");
        scanf("%lf", &aluno[i].nota1);

        printf("Digite a nota 2 do aluno: ");
        scanf("%lf", &aluno[i].nota2);
        
        // Limpa o buffer
        int c;
        while ((c = getchar()) != '\n' && c != EOF);

        // Calcula média e status
        double media = calculo_media(aluno[i].nota1, aluno[i].nota2);
        if (media >= 6.0) {
            strcpy(aluno[i].status, "Aprovado");
            aprovados++;
        } else {
            strcpy(aluno[i].status, "Reprovado");
            reprovados++;
        }
        media_geral += media / 5.0;
    }
  
    // Exibe dados de todos os alunos
    for (int i = 0; i < 5; i++) {
        printf("\n--- Dados do Aluno %d ---\n", i + 1);
        printf("Nome: %s\n", aluno[i].nome);
        printf("Nota 1: %.2f\n", aluno[i].nota1);
        printf("Nota 2: %.2f\n", aluno[i].nota2);
        printf("Media: %.2f\n", calculo_media(aluno[i].nota1, aluno[i].nota2));
        printf("Status: %s\n", aluno[i].status);
        printf("---------------------------\n");
    }
    
    // Exibe estatísticas da turma
    printf("\n--- Resumo da Turma ---\n");
    printf("Media Geral: %.2f\n", media_geral);
    printf("Total de Aprovados: %d\n", aprovados);
    printf("Total de Reprovados: %d\n", reprovados);
    printf("---------------------------\n");

    return 0;
} 