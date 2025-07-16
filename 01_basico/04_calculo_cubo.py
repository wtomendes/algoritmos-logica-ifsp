# Exercício 4: Cálculo do Cubo de um Número
# 
# OBJETIVO: Calcular e exibir o cubo (elevado à terceira potência) de um número 
# fornecido pelo usuário.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita ao usuário que digite um número
# - Calcula o cubo do número usando o operador **
# - Exibe o número original e seu cubo
# 
# ENTRADAS: Um número (pode ser inteiro ou decimal)
# SAÍDAS: O número original e seu cubo
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do usuário com input()
# 2. Converte a entrada para float
# 3. Calcula o cubo usando ** 3
# 4. Exibe o resultado formatado

numero = float(input('Digite um número que gostaria de elevar ao CUBO: '))
numero_cubo = numero ** 3
print(f'Seu número foi {numero} e o cubo dele é {numero_cubo}') 