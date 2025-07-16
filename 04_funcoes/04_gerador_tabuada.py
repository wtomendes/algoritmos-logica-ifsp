# Exercício 4: Gerador de Tabuadas
# 
# OBJETIVO: Criar uma função que gera a tabuada de múltiplos números fornecidos.
# 
# O QUE O CÓDIGO FAZ:
# - Define uma função tabuada() que recebe uma lista de números
# - Para cada número, gera sua tabuada completa (1 a 10)
# - Exibe todas as tabuadas formatadas
# 
# ENTRADAS: Lista de números inteiros (separados por espaço)
# SAÍDAS: Tabuadas de todos os números fornecidos
# 
# FUNCIONAMENTO:
# 1. Define função tabuada() com parâmetro lista
# 2. Loop externo: para cada número na lista
# 3. Exibe cabeçalho da tabuada
# 4. Loop interno: multiplica o número por 1 a 10
# 5. Exibe cada linha da tabuada
# 6. Na main, solicita números e chama a função

def tabuada(lista):
    for i in lista:
        print("Tabuada do", i)
        n = 1
        while n <= 10:
            print(i, "x", n, "=", i * n)
            n += 1
        print()  # Linha em branco entre tabuadas

# Pede ao usuário para digitar os números separados por espaço
entrada = input("Digite os números para ver a tabuada, separados por espaço: ")
numeros = [int(x) for x in entrada.split()]

tabuada(numeros) 