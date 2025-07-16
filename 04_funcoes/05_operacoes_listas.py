# Exercício 5: Operações com Listas em Python
# 
# OBJETIVO: Demonstrar diversas operações e funções para manipulação de listas.
# 
# O QUE O CÓDIGO FAZ:
# - Demonstra operações básicas com listas (soma, média, quadrados)
# - Mostra uso de list comprehension
# - Calcula fatoriais e identifica números pares/ímpares
# - Encontra divisores de um número
# 
# ENTRADAS: Nenhuma entrada necessária (dados pré-definidos)
# SAÍDAS: Resultados de várias operações com listas
# 
# FUNCIONAMENTO:
# 1. Demonstra soma de elementos usando sum()
# 2. Calcula média de notas
# 3. Cria lista de quadrados usando loop
# 4. Usa list comprehension para dobrar valores
# 5. Encontra maior e menor valores
# 6. Calcula fatoriais em loop
# 7. Separa números pares e ímpares
# 8. Encontra divisores de um número

# 1. Soma dos elementos
numeros = [4, 7, 1, 9, 2]
soma = sum(numeros)
print("1. Soma dos elementos:", soma)

# 2. Cálculo de média
notas = [6.5, 7.0, 8.2, 5.9]
media = sum(notas) / len(notas)
print("2. Média das notas:", media)

# Função para calcular média
def calcular_media(lista):
    if not lista:  # Verifica se a lista está vazia
        return 0
    return sum(lista) / len(lista)

# Exemplo de uso da função
lista1 = [7765.122, 4574574.342, 4574574.342, 4574574.342, 4574574.342]
print("3. Média da lista1:", calcular_media(lista1))

# 4. Lista de quadrados
quadrados = []
for i in range(1, 11):
    quadrados.append(i ** 2)
print("4. Quadrados de 1 a 10:", quadrados)

# 5. List comprehension para dobrar valores
valores = [1, 2, 3, 4]
dobrados = [v * 2 for v in valores]
print("5. Valores dobrados:", dobrados)

# 6. Maior e menor valor
lista = [12, 5, 20, 3, 9]
print("6. Maior:", max(lista))
print("6. Menor:", min(lista))

# 7. Cálculo de fatoriais
fatoriais = []
for n in range(1, 6):
    f = 1
    for i in range(1, n + 1):
        f *= i
    fatoriais.append(f)
print("7. Fatoriais de 1 a 5:", fatoriais)

# 8. Números pares e ímpares
numeros = list(range(1, 21))  # 1 a 20
pares = [n for n in numeros if n % 2 == 0]
impares = [n for n in numeros if n % 2 != 0]
print("8. Pares de 1 a 20:", pares)
print("8. Ímpares de 1 a 20:", impares)

# 9. Divisores de um número
num = 36
divisores = []
for i in range(1, num + 1):
    if num % i == 0:
        divisores.append(i)
print(f"9. Divisores de {num}:", divisores) 