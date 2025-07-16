# Exercício 3: Filtro de Números Pares
# 
# OBJETIVO: Criar uma função que filtra e retorna apenas os números pares de uma lista.
# 
# O QUE O CÓDIGO FAZ:
# - Define uma função pares() que recebe uma lista
# - Filtra apenas os números pares
# - Retorna uma nova lista com os pares encontrados
# - Solicita dados ao usuário e demonstra o uso
# 
# ENTRADAS: Lista com 5 números inteiros
# SAÍDAS: Lista contendo apenas os números pares
# 
# FUNCIONAMENTO:
# 1. Define função pares() com parâmetro lista
# 2. Cria lista vazia para números pares
# 3. Loop: verifica se cada número é par (resto da divisão por 2 == 0)
# 4. Se for par, adiciona à lista de resultados
# 5. Retorna lista com pares
# 6. Na main, solicita dados e chama a função

def pares(lista):
    pares = []
    for i in lista:
        if i % 2 == 0:
            pares.append(i)
    return pares

# Solicita 5 números ao usuário
lista = []
for i in range(5):
    novo_number = int(input("Digite um número para ser adicionado à lista (serão 5 números!): "))
    lista.append(novo_number)

resultado = pares(lista)
print("Lista Feita Por Você!!:", lista)
print("Números pares encontrados:", resultado) 