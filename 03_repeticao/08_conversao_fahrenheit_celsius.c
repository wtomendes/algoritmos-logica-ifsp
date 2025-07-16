/*
 * Exercício 8: Conversão de Fahrenheit para Celsius
 * 
 * OBJETIVO: Converter temperaturas de Fahrenheit para Celsius em loop contínuo.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita temperaturas em Fahrenheit em loop
 * - Converte para Celsius usando a fórmula: C = (F - 32) * 5/9
 * - Para quando a temperatura for menor que -459.67°F (zero absoluto)
 * 
 * ENTRADAS: Temperaturas em Fahrenheit (números decimais)
 * SAÍDAS: Temperaturas convertidas para Celsius
 * 
 * FUNCIONAMENTO:
 * 1. Loop infinito solicitando temperaturas
 * 2. Verifica se a temperatura é válida (>= -459.67°F)
 * 3. Se válida, converte e exibe em Celsius
 * 4. Se inválida, para o programa
 */

#include <stdio.h>

int main() {
    double f, celsius;

    while (1) {
        printf("Graus F: ");
        scanf("%lf", &f);

        if (f < -459.67) {
            break;
        }

        celsius = (f - 32) * 5.0 / 9.0;
        printf("%g\n", celsius);
    }

    return 0;
} 