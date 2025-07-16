/*
 * Exercício 2: Cálculo do Antecessor
 * 
 * OBJETIVO: Calcular e exibir o antecessor de um número inteiro fornecido pelo usuário.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita ao usuário que digite um número inteiro
 * - Calcula o antecessor (número - 1)
 * - Exibe o resultado na tela
 * 
 * ENTRADAS: Um número inteiro fornecido pelo usuário
 * SAÍDAS: O antecessor do número digitado
 * 
 * FUNCIONAMENTO:
 * 1. Declara uma variável para armazenar o número
 * 2. Solicita entrada do usuário com scanf()
 * 3. Calcula o antecessor subtraindo 1 do número
 * 4. Exibe o resultado usando printf()
 */

#include <stdio.h>

int main() {
    int numero;
    
    printf("Entre com um numero inteiro: ");
    scanf("%d", &numero);
    
    printf("Antecessor: %d\n", numero - 1);
    
    return 0;
} 