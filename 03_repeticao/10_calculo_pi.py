# Exercício 10: Cálculo de Pi usando Série
# 
# OBJETIVO: Calcular o valor de Pi usando uma série matemática até um limite especificado.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita um limite pequeno para a precisão do cálculo
# - Calcula Pi usando a série: π/4 = 1 - 1/3 + 1/5 - 1/7 + ...
# - Para quando o termo for menor que o limite especificado
# 
# ENTRADAS: Limite de precisão (número decimal pequeno)
# SAÍDAS: Valor aproximado de Pi com 8 casas decimais
# 
# FUNCIONAMENTO:
# 1. Solicita entrada do limite de precisão
# 2. Inicializa variáveis para o cálculo da série
# 3. Loop: enquanto o termo > limite
# 4. Calcula cada termo da série alternando sinal
# 5. Multiplica por 4 para obter Pi
# 6. Exibe resultado com 8 casas decimais

limite = float(input("Digite um limite pequeno: "))
c = 1
sinal = -1
soma = 1  # primeiro termo já é 1
termo = 1  # valor do termo atual (inicializa como 1)

while abs(termo) > limite:
    termo = sinal * (1 / (2 * c + 1))  # calcula o termo da vez
    soma += termo
    sinal *= -1
    c += 1

print(f"Pi = {soma * 4:.8f}") 