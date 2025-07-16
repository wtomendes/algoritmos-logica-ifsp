/*
 * Exercício 1: Função para Cálculo de Potência
 * 
 * OBJETIVO: Criar uma função que calcula a potência de um número.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Define uma função potencia() que recebe base e expoente
 * - Calcula a potência usando um loop
 * - Demonstra o uso da função com exemplos
 * 
 * ENTRADAS: Base e expoente (inteiros)
 * SAÍDAS: Resultado da potência calculada
 * 
 * FUNCIONAMENTO:
 * 1. Define função potencia() com parâmetros base e expoente
 * 2. Inicializa resultado = 1
 * 3. Loop: multiplica resultado pela base, expoente vezes
 * 4. Retorna o resultado
 * 5. Na main(), testa a função com exemplos
 */

#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    printf("2^3 = %d\n", potencia(2, 3)); // Exemplo de uso da função
    printf("5^4 = %d\n", potencia(5, 4)); // Exemplo de uso da função
    return 0;
} 