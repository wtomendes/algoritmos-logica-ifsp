/*
 * Exercício 2: Maior Número entre Três Valores
 * 
 * OBJETIVO: Determinar qual é o maior número entre três valores fornecidos pelo usuário.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita três números ao usuário
 * - Compara os três números usando estruturas condicionais aninhadas
 * - Exibe qual é o maior valor
 * 
 * ENTRADAS: Três números inteiros (v1, v2, v3)
 * SAÍDAS: O maior valor entre os três números
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada dos três números
 * 2. Usa if/else if/else para comparar os valores
 * 3. Exibe o maior valor encontrado
 */

#include <stdio.h>

int main() {
    int v1, v2, v3;

    printf("Digite o valor 1: ");
    scanf("%d", &v1);

    printf("Digite o valor 2: ");
    scanf("%d", &v2);

    printf("Digite o valor 3: ");
    scanf("%d", &v3);

    if (v1 > v2 && v1 > v3) {
        printf("Maior valor: %d\n", v1);
    } else if (v2 > v1 && v2 > v3) {
        printf("Maior valor: %d\n", v2);
    } else {
        printf("Maior valor: %d\n", v3);
    }
    
    return 0;
} 