# Exercício 7: Cálculo de Desconto por Valor de Compra
# 
# OBJETIVO: Calcular o desconto aplicado em uma compra baseado no valor total.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita o valor da compra
# - Aplica percentual de desconto baseado na faixa de valor
# - Exibe o valor do desconto calculado
# 
# ENTRADAS: Valor da compra (número decimal)
# SAÍDAS: Valor do desconto aplicado
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do valor da compra
# 2. Verifica a faixa de valor e aplica desconto apropriado:
#    - > R$ 500: 15% de desconto
#    - R$ 200-500: 10% de desconto
#    - < R$ 200: 5% de desconto
# 3. Exibe o valor do desconto

valorc = float(input("Valor da compra: "))

if valorc > 500:
    desconto = 0.15 * valorc
elif valorc <= 500 and valorc >= 200:
    desconto = 0.1 * valorc
elif valorc < 200:
    desconto = 0.05 * valorc

print(f"Seu desconto foi de R$ {desconto:.2f}") 