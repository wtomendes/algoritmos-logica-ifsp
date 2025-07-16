# Exercício 2: Soma dos Números Ímpares em um Intervalo
# 
# OBJETIVO: Calcular a soma dos números ímpares entre dois valores fornecidos.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita valor inicial e final do intervalo
# - Verifica se o intervalo é válido
# - Calcula a soma dos números ímpares no intervalo
# - Exibe o resultado
# 
# ENTRADAS: Valor inicial e valor final (inteiros)
# SAÍDAS: Soma dos números ímpares no intervalo
# 
# FUNCIONAMENTO:
# 1. Solicita entrada dos valores inicial e final
# 2. Verifica se o intervalo é válido (inicial < final)
# 3. Se válido, percorre o intervalo:
#    - Verifica se o número é ímpar (resto da divisão por 2 != 0)
#    - Adiciona à soma se for ímpar
# 4. Exibe o resultado

valori = int(input("Digite o valor inicial: "))
valorf = int(input("Digite o valor final: "))
soma = 0

if valori > valorf:
    print("Intervalo de valores inválido")
elif valori == valorf:
    pass  # Não faz nada quando valori é igual a valorf
else:
    while valori <= valorf:
        if valori % 2 != 0:
            soma += valori
        valori += 1
    print(f"Soma dos ímpares neste intervalo: {soma}") 