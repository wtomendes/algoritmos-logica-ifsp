/*
 * Exercício 3: Cadastro de Produtos com Busca por Preço
 * 
 * OBJETIVO: Criar um sistema de cadastro de produtos e encontrar produtos abaixo de um valor de referência.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cadastra 5 produtos com nome, código e preço
 * - Solicita um valor de referência
 * - Exibe produtos com preço menor que o valor de referência
 * 
 * ENTRADAS: Dados de 5 produtos e valor de referência
 * SAÍDAS: Lista de produtos abaixo do valor de referência
 * 
 * FUNCIONAMENTO:
 * 1. Define estrutura Produto com nome, código e preço
 * 2. Loop: cadastra 5 produtos
 * 3. Solicita valor de referência
 * 4. Loop: verifica produtos abaixo do valor
 * 5. Exibe produtos encontrados
 */

#include <stdio.h>
#include <locale.h>

typedef struct {
    char nome[50];
    char codigo[10];
    double price;
} produto;

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    produto produtos[5]; // Array de 5 produtos
    
    // Cadastro dos produtos
    for (int i = 0; i < 5; i++) {
        printf("Nome do produto %d: ", i + 1);
        scanf("%49s", produtos[i].nome);
        printf("Codigo do produto %d: ", i + 1);
        scanf("%9s", produtos[i].codigo);
        printf("Preco do produto %d: ", i + 1);
        scanf("%lf", &produtos[i].price);
    }
    
    printf("Preciso de um valor de referencia para encontrar o produto mais em conta.\n");
    double valor_referencia;
    scanf("%lf", &valor_referencia);

    // Busca produtos abaixo do valor de referência
    for (int i = 0; i < 5; i++) {
        if (produtos[i].price < valor_referencia) {
            printf("Produto %d: %s\n", i + 1, produtos[i].nome);
        }
    }
    
    return 0;
} 