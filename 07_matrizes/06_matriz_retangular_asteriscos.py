# Exercício 6: Matriz Retangular de Asteriscos
# 
# OBJETIVO: Criar uma matriz retangular de asteriscos com dimensões definidas pelo usuário.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita ao usuário o número de linhas e colunas
# - Cria uma matriz retangular preenchida com asteriscos
# - Exibe a matriz formatada na tela
# 
# ENTRADAS: Número de linhas e número de colunas (inteiros)
# SAÍDAS: Matriz retangular de asteriscos
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do número de linhas
# 2. Solicita entrada do número de colunas
# 3. Loop duplo para criar matriz retangular
# 4. Preenche cada posição com asterisco
# 5. Exibe a matriz com formatação adequada

numero = int(input("Digite o número de linhas: "))
numero2 = int(input("Digite o número de colunas: "))

print(f"Matriz {numero}x{numero2} de asteriscos:\n")

for i in range(numero):
    for j in range(numero2):
        print("* ", end="")
    print()  # Pula linha após cada linha da matriz 