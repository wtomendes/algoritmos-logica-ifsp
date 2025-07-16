/*
 * Exercício 5: Matriz Quadrada de Asteriscos
 * 
 * OBJETIVO: Criar uma matriz quadrada de asteriscos com tamanho definido pelo usuário.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita ao usuário o tamanho da matriz quadrada
 * - Cria uma matriz NxN preenchida com asteriscos
 * - Exibe a matriz formatada na tela
 * 
 * ENTRADAS: Tamanho da matriz (número inteiro)
 * SAÍDAS: Matriz quadrada de asteriscos
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada do tamanho da matriz
 * 2. Loop duplo para criar matriz NxN
 * 3. Preenche cada posição com asterisco
 * 4. Exibe a matriz com formatação adequada
 */

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, ".UTF8");
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Voce digitou: %d\n", numero);
    printf("Aqui vai uma matriz %dx%d:\n\n", numero, numero);

    // Cria e exibe a matriz de asteriscos
    for (int i = 0; i < numero; i++) {
        for (int j = 0; j < numero; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
} 