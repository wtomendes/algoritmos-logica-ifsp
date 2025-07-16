/*
 * Exercício 5: Verificação de Elegibilidade para Doação de Sangue
 * 
 * OBJETIVO: Verificar se uma pessoa pode doar sangue baseado na sua idade.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita a idade da pessoa
 * - Verifica se a idade está dentro da faixa permitida (18-67 anos)
 * - Informa se a pessoa pode ou não doar sangue
 * 
 * ENTRADAS: Idade da pessoa (número inteiro)
 * SAÍDAS: Mensagem indicando se pode ou não doar sangue
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada da idade
 * 2. Verifica se a idade está entre 18 e 67 anos
 * 3. Exibe resultado baseado na verificação
 */

#include <stdio.h>

int main() {
    int idade;

    printf("Idade: ");
    scanf("%d", &idade);

    if (idade >= 18 && idade <= 67) {
        printf("Pode doar sangue\n");
    } else {
        printf("Nao pode doar sangue\n");
    }

    return 0;
} 