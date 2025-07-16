# Exercício 6: Soma, Média e Slice de Lista
# 
# OBJETIVO: Demonstrar operações básicas com listas incluindo slice (fatiamento).
# 
# O QUE O CÓDIGO FAZ:
# - Cria uma lista com números
# - Calcula soma e média dos elementos
# - Define função para extrair elementos de uma faixa específica
# - Demonstra uso de slice (fatiamento) de listas
# 
# ENTRADAS: Nenhuma entrada necessária (lista pré-definida)
# SAÍDAS: Soma, média e elementos de uma faixa específica
# 
# FUNCIONAMENTO:
# 1. Define lista com números
# 2. Calcula soma usando sum()
# 3. Calcula média dividindo soma pelo tamanho
# 4. Define função para extrair faixa de elementos
# 5. Demonstra uso da função com slice

lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 131, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]

# Cálculo de soma e média
soma = sum(lista)
print("Soma:", soma)
media = soma / len(lista)
print("Média:", media)

# Função para extrair elementos de uma faixa
def escolha_elementos(lista, inicio, fim):
    return lista[inicio:fim]

# Demonstração do uso da função
print("Elementos da posição 5 a 10:", escolha_elementos(lista, 5, 10))
print("Elementos da posição 0 a 5:", escolha_elementos(lista, 0, 5))
print("Elementos da posição 10 a 15:", escolha_elementos(lista, 10, 15)) 