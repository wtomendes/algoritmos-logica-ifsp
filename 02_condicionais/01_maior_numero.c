/*
 * Exercício 1: Maior Número entre Dois Valores
 * 
 * OBJETIVO: Determinar qual é o maior número entre dois valores fornecidos pelo usuário.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita dois números ao usuário
 * - Compara os números usando estruturas condicionais
 * - Exibe qual é o maior ou se são iguais
 * 
 * ENTRADAS: Dois números (A e B)
 * SAÍDAS: Indicação de qual número é maior ou se são iguais
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada dos dois números
 * 2. Usa if/else if/else para comparar os valores
 * 3. Exibe mensagem apropriada baseada na comparação
 */

#include <stdio.h>

int main() {
    double n1, n2;

    printf("Digite o numero A: ");
    scanf("%lf", &n1);
    printf("Digite o numero B: ");
    scanf("%lf", &n2);

    if (n1 > n2) {
        printf("Primeiro Maior\n");
    } else if (n1 < n2) {
        printf("Segundo Maior\n");
    } else {
        printf("Iguais\n");
    }
    
    return 0;
} 