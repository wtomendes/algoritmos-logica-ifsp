/*
 * Exercício 6: Cálculo da Média de Duas Notas
 * 
 * OBJETIVO: Calcular a média aritmética de duas notas fornecidas pelo usuário.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita duas notas ao usuário
 * - Calcula a média aritmética (soma / 2)
 * - Exibe o resultado da média
 * 
 * ENTRADAS: Duas notas (números decimais)
 * SAÍDAS: Média calculada
 * 
 * FUNCIONAMENTO:
 * 1. Declara variáveis para as notas e média
 * 2. Solicita entrada das duas notas
 * 3. Calcula média: (nota1 + nota2) / 2
 * 4. Exibe o resultado
 */

#include <stdio.h>

int main(void) {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Media = %.2f\n", media);

    return 0;
} 