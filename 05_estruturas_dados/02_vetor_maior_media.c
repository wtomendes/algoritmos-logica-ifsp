/*
 * Exercício 2: Vetor - Números Maiores que a Média
 * 
 * OBJETIVO: Calcular a média de um vetor e exibir os elementos maiores que a média.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita 5 números para preencher um vetor
 * - Calcula a média dos elementos
 * - Exibe apenas os números maiores que a média
 * 
 * ENTRADAS: 5 números (elementos do vetor)
 * SAÍDAS: Números maiores que a média calculada
 * 
 * FUNCIONAMENTO:
 * 1. Declara vetor de tamanho 5
 * 2. Loop: solicita e armazena cada elemento
 * 3. Calcula soma de todos os elementos
 * 4. Calcula média (soma / tamanho)
 * 5. Loop: exibe elementos maiores que a média
 */

#include <stdio.h>

#define TAM 5

int main() {
    double vet[TAM];
    double soma = 0;
    double media = 0;

    // Entrada dos números
    for(int i = 0; i < TAM; i++) {
        printf("Digite o elemento %d: ", i+1);
        scanf("%lf", &vet[i]);
    }

    // Soma todos os elementos
    for(int i = 0; i < TAM; i++) {
        soma += vet[i];
    }

    media = soma / TAM;
    printf("Média calculada: %.2f\n", media);

    // Imprime os maiores que a média
    printf("Elementos maiores que a média: ");
    for(int i = 0; i < TAM; i++) {
        if (vet[i] > media)
            printf("%.1lf ", vet[i]);
    }
    printf("\n");

    return 0;
} 