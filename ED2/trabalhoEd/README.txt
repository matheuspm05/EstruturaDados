Boa pergunta — aqui está a confusão comum: existem dois tipos de arquivos diferentes no seu trabalho.

1️⃣ Arquivos do PROGRAMA (código)
2️⃣ Arquivos de DADOS (registros e árvore gravada)

Eles são coisas completamente diferentes.

1️⃣ Arquivos do programa (seu código)

Esses você cria para organizar o código.

Exemplo da estrutura:

projeto/
│
├── main.c
├── arvoreb.c
├── arvoreb.h
├── registro.c
├── registro.h
├── menu.c
├── menu.h

Esses arquivos são compilados:

gcc main.c arvoreb.c registro.c menu.c -o programa

Eles não são criados durante a execução.

2️⃣ Arquivos de dados (criados/usados pelo programa)

Seu trabalho pede dois arquivos externos:

📄 Arquivo de registros

Passado na linha de comando.

Exemplo:

registros.txt

Conteúdo:

1001 João 27999999999
1002 Maria 27988888888
1003 Pedro 27977777777

Ou binário se você quiser.

Esse arquivo guarda:

matricula
nome
telefone
📄 Arquivo da árvore B

Criado quando o usuário escolhe Gravar.

Exemplo:

arvore.txt

Conteúdo exemplo:

0x123456
[1001 1002 1003]
[1004 1005]

A primeira linha é o endereço da raiz, como o professor pediu.

3️⃣ Fluxo completo do programa

Quando executa:

./programa registros.txt arvore.txt

Fluxo:

1 programa inicia
2 lê registros.txt
3 cria árvore B em memória
4 mostra menu

Menu:

1 Cadastrar
2 Pesquisar
3 Gravar
4 Sair
Cadastrar
usuário digita dados

Programa:

1 salva no registros.txt
2 pega posição do registro no arquivo
3 insere na árvore B
Pesquisar
usuário digita matrícula

Programa:

1 busca na árvore B
2 pega posição no arquivo
3 fseek direto no registro
4 mostra nome e telefone

Sem percorrer o arquivo inteiro (exigência do trabalho).

Gravar

Cria:

arvore.txt

Com todos os nós da árvore.

Sair
libera memória da árvore
encerra programa
4️⃣ Resumo visual
ARQUIVOS DO PROGRAMA
(compilados)

main.c
arvoreb.c
arvoreb.h
registro.c
registro.h
menu.c
menu.h


ARQUIVOS DE DADOS
(usados pelo programa)

registros.txt   -> entrada e cadastro
arvore.txt      -> saída da opção gravar

✅ Regra fácil de lembrar

.c / .h -> código do programa
.txt    -> dados manipulados pelo programa