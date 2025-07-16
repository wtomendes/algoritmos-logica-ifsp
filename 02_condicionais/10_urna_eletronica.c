/*
 * Exercício 10: Urna Eletrônica Simples
 * 
 * OBJETIVO: Simular uma urna eletrônica que aceita votos específicos.
 * 
 * O QUE O CÓDIGO FAZ:
 * - Solicita ao usuário que digite seu voto
 * - Verifica se o voto é válido (13 ou 22)
 * - Confirma o voto ou informa que é inválido
 * 
 * ENTRADAS: Número do voto (inteiro)
 * SAÍDAS: Confirmação do voto ou mensagem de voto inválido
 * 
 * FUNCIONAMENTO:
 * 1. Solicita entrada do voto
 * 2. Verifica se o voto é 13 ou 22
 * 3. Exibe confirmação ou mensagem de invalidez
 */

#include <stdio.h>

int main() {
    int voto;

    printf("Urna Eletronica Federal do Brasil\n");
    printf("Digite seu voto, cidadao: ");
    scanf("%d", &voto);

    if (voto == 13 || voto == 22) {
        printf("Seu voto foi %d. Obrigado por votar!\n", voto);
    } else {
        printf("Voto invalido.\n");
    }

    return 0;
} 