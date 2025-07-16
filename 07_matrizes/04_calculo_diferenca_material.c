/*
 * Exercício 4: Cálculo de Diferença Material no Xadrez
 * 
 * OBJETIVO: Calcular a diferença de material entre as peças brancas e pretas em um tabuleiro de xadrez.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Cria um tabuleiro de xadrez com peças posicionadas
 * - Atribui valores às peças (Dama=9, Torre=5, Bispo=3, Cavalo=2.5, Peão=1)
 * - Calcula a diferença total de material (brancas - pretas)
 * - Exibe o resultado da diferença
 * 
 * ENTRADAS: Nenhuma entrada necessária (tabuleiro pré-definido)
 * SAÍDAS: Diferença de material entre as peças
 * 
 * FUNCIONAMENTO:
 * 1. Define função para calcular diferença material
 * 2. Inicializa tabuleiro com peças nas posições corretas
 * 3. Percorre matriz somando valores das peças
 * 4. Calcula diferença (brancas - pretas)
 * 5. Exibe resultado
 */

#include <stdio.h>
#include <locale.h>

float calcular_diferenca_material(char tabuleiro[8][8]) {
    float valor_brancas = 0;
    float valor_pretas = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            char peca = tabuleiro[i][j];

            // Peças brancas (minúsculas)
            if (peca == 'd') valor_brancas += 9;      // Dama
            else if (peca == 't') valor_brancas += 5; // Torre
            else if (peca == 'b') valor_brancas += 3; // Bispo
            else if (peca == 'c') valor_brancas += 2.5; // Cavalo
            else if (peca == 'p') valor_brancas += 1; // Peão

            // Peças pretas (maiúsculas)
            else if (peca == 'D') valor_pretas += 9;  // Dama
            else if (peca == 'T') valor_pretas += 5;  // Torre
            else if (peca == 'B') valor_pretas += 3;  // Bispo
            else if (peca == 'C') valor_pretas += 2.5; // Cavalo
            else if (peca == 'P') valor_pretas += 1;  // Peão
            // Reis ('r' e 'R') e espaços vazios (' ') não contribuem para a diferença
        }
    }
    return valor_brancas - valor_pretas;
}

int main() {
    setlocale(LC_CTYPE, ".UTF8");

    // Tabuleiro inicial com peças posicionadas
    char tabuleiro[8][8] = {
        {'T','C','B','D','R','B','C','T'}, // linha 0 - pretas (maiúsculas)
        {'P','P','P','P','P','P','P','P'}, // linha 1 - peões pretos
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 2 - vazio
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 3 - vazio
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 4 - vazio
        {' ',' ',' ',' ',' ',' ',' ',' '}, // linha 5 - vazio
        {'p','p','p','p','p','p','p','p'}, // linha 6 - peões brancos (minúsculas)
        {'t','c','b','d','r','b','c','t'}  // linha 7 - brancas
    };

    float dif = calcular_diferenca_material(tabuleiro);
    printf("Diferença material total: %.1f\n", dif);
    printf("(Valor positivo = vantagem brancas, negativo = vantagem pretas)\n");

    return 0;
} 