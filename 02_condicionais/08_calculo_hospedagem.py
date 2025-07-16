# Exercício 8: Cálculo de Hospedagem com Taxa
# 
# OBJETIVO: Calcular o valor total de uma hospedagem baseado no número de diárias.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita o número de diárias
# - Aplica taxa de serviço baseada na quantidade de dias
# - Calcula e exibe o valor total da hospedagem
# 
# ENTRADAS: Número de diárias (inteiro)
# SAÍDAS: Valor total da hospedagem
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do número de diárias
# 2. Define taxa baseada na quantidade:
#    - > 15 dias: R$ 5,50 por dia
#    - = 15 dias: R$ 6,00 por dia
#    - < 15 dias: R$ 8,00 por dia
# 3. Calcula: (diárias × R$ 60) + (diárias × taxa)
# 4. Exibe o valor total

nd = int(input("Número de diárias: "))

if nd > 15:
    taxa = 5.5
elif nd == 15:
    taxa = 6
else:
    taxa = 8

ValorT = nd * 60 + taxa * nd

print(f"Valor R$ {ValorT:.1f}") 