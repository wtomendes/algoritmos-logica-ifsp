/*
 * Exercício 2: Tabuleiro de Xadrez com Peças
 * 
 * OBJETIVO: Criar e exibir um tabuleiro de xadrez com as peças posicionadas.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cria uma matriz 8x8 representando um tabuleiro de xadrez
 * - Posiciona as peças nas posições iniciais do jogo
 * - Exibe o tabuleiro com as peças representadas por caracteres
 * 
 * ENTRADAS: Nenhuma entrada necessária
 * SAÍDAS: Tabuleiro de xadrez com peças posicionadas
 * 
 * FUNCIONAMENTO:
 * 1. Declara matriz 8x8 de caracteres
 * 2. Inicializa com peças nas posições corretas
 * 3. Loop duplo para exibir a matriz
 * 4. Exibe cada peça com espaçamento
 */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    
    char tabuleiro_nomeado[8][8] = {
        {'T','C','B','D','R','B','C','T'}, // linha 0 - pretas (maiúsculas)
        {'P','P','P','P','P','P','P','P'}, // linha 1 - peões pretos 
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 2 - vazio
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 3 - vazio
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 4 - vazio
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 5 - vazio
        {'p','p','p','p','p','p','p','p'}, // linha 6 - peões brancos (minúsculas)
        {'t','c','b','d','r','b','c','t'}  // linha 7 - brancas
    };

    printf("Tabuleiro de Xadrez com Peças:\n");
    printf("Legenda: T=Torre, C=Cavalo, B=Bispo, D=Dama, R=Rei, P=Peão\n");
    printf("Maiúsculas = Pretas, Minúsculas = Brancas\n\n");
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            printf("%c ", tabuleiro_nomeado[i][j]);
        }
        printf("\n");
    }

    return 0;
} 