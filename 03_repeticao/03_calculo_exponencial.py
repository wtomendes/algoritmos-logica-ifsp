# Exercício 3: Cálculo da Função Exponencial (e^x)
# 
# OBJETIVO: Calcular o valor de e^x usando a série de Taylor.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita um valor x ao usuário
# - Calcula e^x usando a série de Taylor
# - Para quando o termo for menor que 0.0001
# - Exibe o resultado com 4 casas decimais
# 
# ENTRADAS: Valor x (número decimal)
# SAÍDAS: Valor de e^x calculado
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do valor x
# 2. Inicializa variáveis para o cálculo da série
# 3. Enquanto o termo >= 0.0001:
#    - Calcula o próximo termo da série
#    - Adiciona à soma
#    - Incrementa o contador n
# 4. Exibe o resultado final

x = float(input("Digite x: "))

termo = 1
soma = 1
n = 1

while termo >= 0.0001:
    termo = termo * x / n
    soma += termo
    n += 1

print(f"e elevado a {x} = {soma:.4f}") 