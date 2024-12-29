# PSET 2 SUBSTITUIÇÃO
Em uma cifra de substituição, “criptografamos” (ou seja, ocultamos de forma reversível) uma mensagem substituindo cada letra por outra. Para isso, usamos uma chave, neste caso, um mapeamento de cada uma das letras do alfabeto à letra correspondente quando criptografada. Para “decifrar” a mensagem, o receptor da mensagem precisaria saber a chave, para que pudesse reverter o processo: traduzir o texto criptografado (geralmente chamado de texto cifrado) de volta na mensagem original (geralmente chamado de texto simples).

Uma chave, por exemplo, pode ser a sequencia NQXPOMAFTRHLZGECYJIUWSKDVB. Esta chave de 26 caracteres significa que A (a primeira letra do alfabeto) deve ser convertido em N (o primeiro caractere da chave), B (a segunda letra do alfabeto) deve ser convertido em Q (o segundo caractere do chave) e assim por diante.

Uma mensagem como HELLO seria criptografada como FOLLE, substituindo cada uma das letras de acordo com o mapeamento determinado pela chave.

Vamos escrever um programa chamado substitution que permite criptografar mensagens usando uma cifra de substituição. No momento em que o usuário executa o programa, ele deve decidir, fornecendo um argumento de linha de comando, qual deve ser a chave na mensagem secreta que fornecerá durante a execução.

Aqui estão alguns exemplos de como o programa pode funcionar. Por exemplo, se o usuário inserir uma chave de YTNSHKVEFXRBAUQZCLWDMIPGJO e um texto simples de HELLO:

```Run
$ ./substitution YTNSHKVEFXRBAUQZCLWDMIPGJO
texto simples: HELLO
texto cifrado: EHBBQ
```


