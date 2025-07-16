/*
 * Exercício 9: Divisões Sucessivas por 2
 * 
 * OBJETIVO: Realizar divisões sucessivas de um número por 2 até que o resultado seja menor que 1.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita um número N ao usuário
 * - Divide o número por 2 repetidamente
 * - Conta quantas divisões foram realizadas
 * - Exibe o último resultado e o número de divisões
 * 
 * ENTRADAS: Um número N (decimal)
 * SAÍDAS: Último resultado e número de divisões realizadas
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada do número N
 * 2. Loop: enquanto N >= 1
 * 3. Divide N por 2 e incrementa contador
 * 4. Exibe último resultado e total de divisões
 */

#include <stdio.h>

int main() {
    double n;
    int divisoes = 0;

    printf("Digite N: ");
    scanf("%lf", &n);

    while (n >= 1) {
        n = n / 2;
        divisoes += 1;
    }

    printf("Ultimo resultado = %g\n", n);
    printf("Foram feitas %d divisoes\n", divisoes);

    return 0;
} 