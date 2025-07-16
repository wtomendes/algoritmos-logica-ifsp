# Exercício 1: Soma dos Quadrados
# 
# OBJETIVO: Calcular a soma dos quadrados dos números de 1 até N.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita um número N ao usuário
# - Calcula a soma dos quadrados de 1 até N
# - Exibe o resultado final
# 
# ENTRADAS: Número N (inteiro)
# SAÍDAS: Soma dos quadrados de 1 até N
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do número N
# 2. Inicializa contador e soma
# 3. Enquanto contador < N:
#    - Incrementa contador
#    - Adiciona o quadrado do contador à soma
# 4. Exibe o resultado final

n = int(input("Digite N: "))
c = 0
soma = 0

while c < n:
    c += 1
    soma += c ** 2

print(f"A soma dos quadrados é {soma}") 