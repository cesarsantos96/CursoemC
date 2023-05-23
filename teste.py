noticia = 'Selic vai a 2.75% e supera expectativas; é a primeira alta em 6 anos.'
palavras = noticia.split()
for palavra in palavras:
    if '%' in palavra:
        selic = float(palavra.replace('%', ''))
partes = noticia.split('anos')
ano = int(partes[0].split()[-1])


print('Selic', selic)
print('Ano', ano)
