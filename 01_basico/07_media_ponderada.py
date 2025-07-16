# Exercício 7: Cálculo da Média Ponderada
# 
# OBJETIVO: Calcular a média ponderada de três notas com pesos diferentes.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita três notas ao usuário
# - Aplica pesos diferentes (1, 3, 2) para cada nota
# - Calcula a média ponderada
# - Verifica se o aluno foi aprovado (média >= 6)
# 
# ENTRADAS: Três notas (números decimais)
# SAÍDAS: Média ponderada e status de aprovação
# 
# FUNCIONAMENTO:
# 1. Solicita entrada das três notas
# 2. Calcula média ponderada: (nota1*1 + nota2*3 + nota3*2) / (1+3+2)
# 3. Verifica se média >= 6
# 4. Exibe resultado e status

nota1 = float(input("Qual foi sua primeira nota: "))
nota2 = float(input("Qual foi sua segunda nota: "))
nota3 = float(input("Qual foi sua terceira nota: "))

mediap = (nota1 * 1 + nota2 * 3 + nota3 * 2) / (1 + 2 + 3)

if mediap >= 6:
    print("Aprovado")
else:
    print("Reprovado")

print(f"Média ponderada: {mediap:.2f}") 