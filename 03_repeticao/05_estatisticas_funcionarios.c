/*
 * Exercício 5: Estatísticas de Funcionários
 * 
 * OBJETIVO: Calcular estatísticas de uma empresa baseado em dados dos funcionários.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita dados de funcionários em loop (idade, sexo, salário)
 * - Calcula média salarial, maior e menor idade
 * - Conta mulheres com baixa renda (salário <= R$ 1000)
 * - Para quando idade < 0
 * 
 * ENTRADAS: Idade, sexo (1=F, 2=M), salário de cada funcionário
 * SAÍDAS: Média salarial, maior/menor idade, quantidade de mulheres baixa renda
 * 
 * FUNCIONAMENTO:
 * 1. Inicializa variáveis para estatísticas
 * 2. Loop principal:
 *    - Solicita idade (para se idade < 0)
 *    - Solicita sexo e salário
 *    - Atualiza estatísticas
 * 3. Calcula média final
 * 4. Exibe todos os resultados
 */

#include <stdio.h>

int main() {
    int idade, sexo, maior_idade = 0, menor_idade = 1000, contador = 0, quantidade_fem = 0;
    double salario, salario_total = 0, media_salario = 0;

    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0) { 
            break;
        }

        printf("Sexo (1=F 2=M): ");
        scanf("%d", &sexo);

        printf("Salario: ");
        scanf("%lf", &salario);

        // Atualizando estatísticas
        salario_total += salario;
        contador += 1;

        if (idade > maior_idade) {
            maior_idade = idade;
        }
        if (idade < menor_idade) {
            menor_idade = idade;
        }
        if (sexo == 1 && salario <= 1000) {
            quantidade_fem += 1;
        }
    }

    if (contador > 0) { 
        media_salario = salario_total / contador;
    }

    printf("Media salarial = %.2f\n", media_salario);
    printf("Maior idade = %d\n", maior_idade);
    printf("Menor idade = %d\n", menor_idade);
    printf("Mulheres baixa renda = %d\n", quantidade_fem);

    return 0;
} 