/*
 * Exercício 3: Tabuleiro de Xadrez com Padrão Alternado
 * 
 * OBJETIVO: Criar um tabuleiro de xadrez com padrão alternado usando uma matriz.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cria uma matriz 8x8 representando um tabuleiro de xadrez
 * - Gera padrão alternado baseado na soma da linha e coluna
 * - Exibe o tabuleiro com casas brancas (0) e pretas (1)
 * 
 * ENTRADAS: Nenhuma entrada necessária
 * SAÍDAS: Tabuleiro de xadrez com padrão alternado
 * 
 * FUNCIONAMENTO:
 * 1. Declara matriz 8x8 de inteiros
 * 2. Loop duplo: preenche matriz com padrão alternado
 * 3. Usa fórmula (i + j) % 2 para alternar valores
 * 4. Loop duplo: exibe matriz formatada
 */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    int tabuleiro[8][8];
    int i, j;

    // Preenche a matriz com padrão alternado
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            tabuleiro[i][j] = (i + j) % 2; // Soma linha e coluna, resto da divisão por 2
            // Se a soma for par (resto == 0), é uma casa branca (0)
            // Se for ímpar (resto != 0), é uma casa preta (1)
        }
    }

    printf("Tabuleiro de Xadrez - Padrão Alternado:\n");
    printf("0 = Casa Branca, 1 = Casa Preta\n\n");
    
    // Exibe a matriz
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 8; j++) {
            if(tabuleiro[i][j] == 0)
                printf("0 "); // Casa branca
            else
                printf("1 "); // Casa preta
        }
        printf("\n"); // pula linha após terminar a linha (i) do tabuleiro
    }

    return 0;
} 