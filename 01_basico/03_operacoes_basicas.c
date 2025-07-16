/*
 * Exercício 3: Operações Matemáticas Básicas
 * 
 * OBJETIVO: Realizar as quatro operações matemáticas básicas (adição, subtração, 
 * multiplicação e divisão) entre dois números inteiros fornecidos pelo usuário.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita dois números inteiros ao usuário
 * - Calcula a soma, subtração, multiplicação e divisão
 * - Exibe todos os resultados na tela
 * 
 * ENTRADAS: Dois números inteiros (N1 e N2)
 * SAÍDAS: Resultados das quatro operações matemáticas
 * 
 * FUNCIONAMENTO:
 * 1. Declara variáveis para os números e resultados
 * 2. Solicita entrada dos dois números
 * 3. Realiza os cálculos das quatro operações
 * 4. Exibe todos os resultados formatados
 */

#include <stdio.h>

int main(void) {
    int N1, N2, soma, subtracao, multiplicacao, divisao;

    printf("Digite N1: ");
    scanf("%d", &N1);

    printf("Digite N2: ");
    scanf("%d", &N2);

    // Realizando as operações matemáticas
    soma = N1 + N2;
    subtracao = N1 - N2;
    multiplicacao = N1 * N2;
    divisao = N1 / N2;

    // Exibindo os resultados
    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", multiplicacao);
    printf("Divisao = %d\n", divisao);

    return 0;
} 