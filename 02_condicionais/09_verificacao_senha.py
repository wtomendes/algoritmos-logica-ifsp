# Exercício 9: Verificação de Senha
# 
# OBJETIVO: Verificar se uma senha digitada pelo usuário está correta.
# 
# O QUE O CÓDIGO FAZ:
# - Solicita ao usuário que digite uma senha
# - Compara com a senha correta pré-definida
# - Informa se o acesso foi permitido ou negado
# 
# ENTRADAS: Senha digitada pelo usuário (texto)
# SAÍDAS: Mensagem de acesso permitido ou negado
# 
# FUNCIONAMENTO:
# 1. Solicita entrada da senha
# 2. Compara com a senha correta ("12Ab")
# 3. Exibe mensagem apropriada baseada na comparação

senha = input("Digite a senha: ")

if senha == "12Ab":
    print("Acesso Permitido")
else:
    print("Acesso Negado") 