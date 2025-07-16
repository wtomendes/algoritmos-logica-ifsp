/*
 * Exercício 6: Sistema de Vendas de Ingressos
 * 
 * OBJETIVO: Calcular preços de ingressos baseado na idade e gerar relatório final.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita idade de cada pessoa em loop
 * - Calcula preço baseado na faixa etária:
 *   * < 3 anos: gratuito
 *   * 3-11 anos: R$ 10
 *   * >= 12 anos: R$ 15
 * - Para quando idade < 0
 * - Exibe relatório com totais e valor arrecadado
 * 
 * ENTRADAS: Idade de cada pessoa (para se idade < 0)
 * SAÍDAS: Relatório com totais por faixa etária e valor total arrecadado
 * 
 * FUNCIONAMENTO:
 * 1. Inicializa contadores e variáveis
 * 2. Loop principal:
 *    - Solicita idade
 *    - Para se idade < 0
 *    - Calcula preço baseado na idade
 *    - Atualiza contadores e total
 * 3. Exibe relatório final
 */

#include <stdio.h>

int main() {
    double price, total = 0;
    int idade;
    int tres = 0, dez = 0, quinze = 0;
    
    while (1) {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        } else if (idade < 3) {
            price = 0;
            tres++;
        } else if (idade < 12 && idade >= 3) {
            price = 10;
            dez++;
        } else { // idade >= 12
            price = 15;
            quinze++;
        }
        
        total += price;
        printf("Preco: %.2f\n", price);
    }
    
    printf("Total de pessoas com menos de 3 anos: %d\n", tres);
    printf("Total de pessoas com idade entre 3 e 11 anos: %d\n", dez);
    printf("Total de pessoas com 12 anos ou mais: %d\n", quinze);
    printf("Total arrecadado: R$ %.2f\n", total);
    printf("Fim do programa.\n");
    
    return 0;
} 