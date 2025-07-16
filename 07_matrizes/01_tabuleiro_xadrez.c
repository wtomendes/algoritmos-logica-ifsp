/*
 * Exercício 1: Tabuleiro de Xadrez
 * 
 * OBJETIVO: Criar e exibir um tabuleiro de xadrez usando uma matriz.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cria uma matriz 8x8 representando um tabuleiro de xadrez
 * - Preenche a matriz com padrão alternado (0 e 1)
 * - Exibe o tabuleiro na tela
 * 
 * ENTRADAS: Nenhuma entrada necessária
 * SAÍDAS: Tabuleiro de xadrez exibido na tela
 * 
 * FUNCIONAMENTO:
 * 1. Declara matriz 8x8
 * 2. Inicializa com padrão alternado (0=branco, 1=preto)
 * 3. Loop duplo para exibir a matriz
 * 4. Pula linha após cada linha do tabuleiro
 */

#include <stdio.h>
#include <locale.h> 

int main() {
    setlocale(LC_CTYPE, ".UTF8"); // Configura o locale para português
    
    int tabuleiro[8][8] = {
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0},
        {0, 1, 0, 1, 0, 1, 0, 1},
        {1, 0, 1, 0, 1, 0, 1, 0} // linha de baixo: preta (1) à esquerda, branca (0) à direita
    };

    printf("Tabuleiro de Xadrez:\n");
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // pula linha após terminar a linha (i) do tabuleiro
    }

    return 0;
} 