# Exercício 4: Soma dos Múltiplos de 3 e 5
# 
# OBJETIVO: Calcular a soma de todos os múltiplos de 3 e 5 até um número N.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita um número N ao usuário
# - Percorre todos os números de 0 até N-1
# - Verifica se cada número é múltiplo de 3 ou 5
# - Soma os múltiplos encontrados
# 
# ENTRADAS: Número N (inteiro)
# SAÍDAS: Soma dos múltiplos de 3 e 5 até N
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do número N
# 2. Inicializa contador e soma
# 3. Enquanto contador < N:
#    - Verifica se o contador é múltiplo de 3 ou 5
#    - Se for, adiciona à soma
#    - Incrementa o contador
# 4. Exibe o resultado final

c = 0
n = int(input("Digite N: "))
soma = 0

while c < n:
    if c % 3 == 0 or c % 5 == 0:
        soma += c
    c += 1

print(f"A soma dos múltiplos de 3 e 5 até {n} é {soma}.") 