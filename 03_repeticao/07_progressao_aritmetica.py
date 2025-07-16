# Exercício 7: Geração de Progressão Aritmética (PA)
# 
# OBJETIVO: Gerar e exibir os primeiros 11 termos de uma progressão aritmética.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita o primeiro termo (número inicial) da PA
# - Solicita a razão da PA
# - Gera e exibe os primeiros 11 termos da progressão
# 
# ENTRADAS: Número inicial e razão da PA (números inteiros)
# SAÍDAS: Os primeiros 11 termos da progressão aritmética
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do número inicial
# 2. Solicita entrada da razão
# 3. Loop: gera 11 termos da PA
# 4. Para cada termo: exibe o valor atual e adiciona a razão
# 5. Exibe "FIM" ao final

c = 0
n = int(input("Numero: "))
r = int(input("Razao: "))

while c <= 10:
    print(f"{n} -->", end=" ")
    n += r
    c += 1
print("FIM") 