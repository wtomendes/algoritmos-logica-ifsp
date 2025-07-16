/*
 * Exercício 4: Verificação de Triângulo
 * 
 * OBJETIVO: Verificar se três valores fornecidos podem formar um triângulo válido.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita três valores que representam os lados de um triângulo
 * - Aplica a condição de existência de triângulo (soma de dois lados > terceiro lado)
 * - Informa se os valores podem formar um triângulo ou não
 * 
 * ENTRADAS: Três valores (a, b, c) representando os lados
 * SAÍDAS: Mensagem indicando se pode ou não formar um triângulo
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada dos três lados
 * 2. Verifica a condição de existência de triângulo
 * 3. Exibe resultado baseado na verificação
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

    // Verificando a condição de existência de triângulo
    if (a + b > c && a + c > b && b + c > a) {
        printf("Pode ser um triangulo\n");
    } else {
        printf("Nao pode ser um triangulo\n");
    }

    return 0;
} 