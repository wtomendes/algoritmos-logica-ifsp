/*
 * Exercício 3: Ordenação de Três Números
 * 
 * OBJETIVO: Ordenar três números fornecidos pelo usuário em ordem crescente.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita três números ao usuário
 * - Usa estruturas condicionais para determinar a ordem correta
 * - Exibe os números ordenados do menor para o maior
 * 
 * ENTRADAS: Três números (a, b, c)
 * SAÍDAS: Os três números ordenados em ordem crescente
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada dos três números
 * 2. Usa if/else if para verificar todas as possíveis combinações de ordem
 * 3. Exibe os números na ordem correta baseada na comparação
 */

#include <stdio.h>

int main() {
    double a, b, c;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    // Verificando todas as possíveis combinações de ordem
    if (a < b && b < c) {
        printf("%g %g %g\n", a, b, c);  // abc
    } else if (c < a && a < b) {
        printf("%g %g %g\n", c, a, b);  // cab
    } else if (b < a && a < c) {
        printf("%g %g %g\n", b, a, c);  // bac
    } else if (b < c && c < a) {
        printf("%g %g %g\n", b, c, a);  // bca
    } else if (a < c && c < b) {
        printf("%g %g %g\n", a, c, b);  // acb
    } else if (c < b && b < a) {
        printf("%g %g %g\n", c, b, a);  // cba
    }
    
    return 0;
} 