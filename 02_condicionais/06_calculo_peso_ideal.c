/*
 * Exercício 6: Cálculo do Peso Ideal
 * 
 * OBJETIVO: Calcular o peso ideal de uma pessoa baseado na altura e sexo.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita altura e sexo da pessoa
 * - Aplica fórmulas diferentes para homens e mulheres
 * - Calcula e exibe o peso ideal
 * 
 * ENTRADAS: Altura (em metros) e sexo (1=masc, 2=fem)
 * SAÍDAS: Peso ideal calculado
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada da altura
 * 2. Solicita entrada do sexo
 * 3. Aplica fórmula específica baseada no sexo
 * 4. Exibe o peso ideal calculado
 */

#include <stdio.h>

int main() {
    double altura, peso_ideal;
    int sexo;

    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    printf("Digite o seu sexo (1 para masculino e 2 para feminino): ");
    scanf("%d", &sexo);

    if (sexo == 1) {
        // Fórmula para homens: (72.7 * altura) - 58
        peso_ideal = (72.7 * altura) - 58;
        printf("Seu peso ideal eh %.2f kg\n", peso_ideal);
    } else if (sexo == 2) {
        // Fórmula para mulheres: (62.1 * altura) - 44.7
        peso_ideal = (62.1 * altura) - 44.7;
        printf("Seu peso ideal eh %.2f kg\n", peso_ideal);
    }

    return 0;
} 