# Exercício 1: Análise de Dados do Brasileirão
# 
# OBJETIVO: Analisar dados de jogos do Brasileirão a partir de um arquivo CSV.
# 
# O QUE O CÓDIGO FAZ:
# - Lê um arquivo CSV com dados de jogos do Brasileirão (2012-2020)
# - Calcula o aproveitamento de um time específico
# - Permite análise por ano específico ou período completo
# 
# ENTRADAS: Nome do time e ano (0 para todos os anos)
# SAÍDAS: Aproveitamento percentual do time
# 
# FUNCIONAMENTO:
# 1. Define função le_arquivo() para ler o CSV
# 2. Define função aprov() para calcular aproveitamento
# 3. Processa cada jogo do time especificado
# 4. Calcula pontos baseado no resultado (C=vitória casa, F=vitória fora, E=empate)
# 5. Retorna aproveitamento percentual

import csv
from collections import namedtuple

def le_arquivo():
    Jogo = namedtuple("Jogo", 'ano,dia,hora,Casa,Fora,gc,gf,res')
    ltn = []  # ltn é Lista de Tuplas Nomeadas
    with open('Brasileirao_SerieA_2012-2020.csv', newline='', encoding='utf-8') as arquivo:
        Dreader = csv.DictReader(arquivo, delimiter=';')
        for d in Dreader:  # d é um dicionário campo->valor, um por linha
            jogo = Jogo(int(d['Ano']), d['Dia'], d['Hora'], d['Casa'], d['Fora'],
                        int(d['GC']), int(d['GF']), d['Res'])
            ltn.append(jogo)
    return ltn

def aprov(time, ano):
    l = le_arquivo()
    jogos = 0
    pontos = 0

    for jogo in l:
        # Se ano==0, pega todos de 2012 a 2020. Se não, só do ano pedido.
        if (ano == 0 and 2012 <= jogo.ano <= 2020) or (ano != 0 and jogo.ano == ano):
            if jogo.Casa.strip().lower() == time.strip().lower():
                jogos += 1
                if jogo.res.upper() == 'C':
                    pontos += 3
                elif jogo.res.lower() == 'e':
                    pontos += 1
            elif jogo.Fora.strip().lower() == time.strip().lower():
                jogos += 1
                if jogo.res.upper() == 'F':
                    pontos += 3
                elif jogo.res.lower() == 'e':
                    pontos += 1

    if jogos == 0:
        return None
    aproveitamento = (pontos / (jogos * 3)) * 100
    return aproveitamento

# Exemplo de teste
resultado = aprov('Flamengo RJ', 2012)
if resultado is not None:
    print(f"Aproveitamento do Flamengo em 2012: {resultado:.2f}%")
else:
    print("Time ou ano não encontrado.")

# Teste para todos os anos de 2012 a 2020
resultado = aprov('Flamengo RJ', 0)
if resultado is not None:
    print(f"Aproveitamento do Flamengo RJ de 2012 a 2020: {resultado:.2f}%")
else:
    print("Time ou ano não encontrado.") 