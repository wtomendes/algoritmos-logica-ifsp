# Exercício 2: Produto Elemento a Elemento de Listas
# 
# OBJETIVO: Criar uma função que calcula o produto elemento a elemento de duas listas.
# 
# O QUE O CÓDIGO FAZ:
# - Define uma função prod() que recebe duas listas
# - Calcula o produto de elementos correspondentes
# - Retorna uma nova lista com os resultados
# - Solicita dados ao usuário e demonstra o uso
# 
# ENTRADAS: Duas listas com 3 elementos cada (números)
# SAÍDAS: Lista com produtos elemento a elemento
# 
# FUNCIONAMENTO:
# 1. Define função prod() com parâmetros Ia e Ib
# 2. Cria lista vazia para resultados
# 3. Loop: multiplica elementos correspondentes das listas
# 4. Retorna lista com produtos
# 5. Na main, solicita dados e chama a função

def prod(Ia, Ib):
    lista = []
    for i in range(len(Ia)):
        lista.append(Ia[i] * Ib[i])
    return lista

# Recebe 3 elementos do usuário para cada lista
a = []
b = []

print("Digite 3 números para a lista A:")
for i in range(3):
    valor = float(input(f"A[{i}]: "))
    a.append(valor)

print("Digite 3 números para a lista B:")
for i in range(3):
    valor = float(input(f"B[{i}]: "))
    b.append(valor)

resultado = prod(a, b)
print("Resultado do produto elemento a elemento:", resultado) 