/*
 * Exercício 6: Cadastro de Petshop
 * 
 * OBJETIVO: Criar um sistema de cadastro para pets com informações básicas.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cadastra um pet com nome, idade e peso
 * - Exibe os dados cadastrados de forma organizada
 * - Utiliza estrutura de dados para organizar as informações
 * 
 * ENTRADAS: Dados de um pet (nome, idade, peso)
 * SAÍDAS: Dados do pet cadastrado
 * 
 * FUNCIONAMENTO:
 * 1. Define estrutura petshop
 * 2. Solicita dados do pet (nome, idade, peso)
 * 3. Armazena na estrutura
 * 4. Exibe todos os dados formatados
 */

#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[50];
    int idade;
    double peso;
} petshop;

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    petshop pet;
    
    // Cadastro do pet
    printf("Qual o nome do seu Pet?: ");
    scanf("%49s", pet.nome);
    
    printf("Qual a idade do seu Pet: ");
    scanf("%d", &pet.idade);
    
    printf("Qual o peso do seu Pet: ");
    scanf("%lf", &pet.peso);
    
    // Exibe os dados cadastrados
    printf("\n=== DADOS DO PET ===\n");
    printf("Nome do Pet: %s\n", pet.nome);
    printf("Idade do Pet: %d anos\n", pet.idade);
    printf("Peso do Pet: %.2f kg\n", pet.peso);
    
    return 0;
} 