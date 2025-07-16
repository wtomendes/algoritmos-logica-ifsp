# Exercício 7: Função para Cálculo de Fatorial
# 
# OBJETIVO: Criar uma função que calcula o fatorial de um número.
# 
# O QUE O CÓDIGO FAZ:
# - Define uma função fatorial() que recebe um número
# - Calcula o fatorial usando um loop
# - Demonstra o uso da função com diferentes valores
# 
# ENTRADAS: Número para calcular o fatorial
# SAÍDAS: Resultado do fatorial calculado
# 
# FUNCIONAMENTO:
# 1. Define função fatorial() com parâmetro n
# 2. Inicializa variável fat = 1
# 3. Loop: multiplica fat por cada número de 1 até n
# 4. Retorna o resultado
# 5. Testa a função com diferentes valores

def fatorial(n):
    fat = 1
    for i in range(1, n + 1):
        fat *= i
    return fat

# Testes da função
print("Fatorial de 0:", fatorial(0))  # Fatorial de 0 é 1
print("Fatorial de 1:", fatorial(1))  # Fatorial de 1 é 1
print("Fatorial de 5:", fatorial(5))  # Fatorial de 5 é 120
print("Fatorial de 10:", fatorial(10))  # Fatorial de 10 