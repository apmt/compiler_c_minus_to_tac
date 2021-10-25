Compilar (TERMINAL NO DIRETÓRIO PRINCIPAL DO TRABALHO):
$ make

Executar testes (TERMINAL NO DIRETÓRIO PRINCIPAL DO TRABALHO):
    Rodar o primeiro teste sintatico:
    $ make run

    Rodar teste específico:
    $ ./tradutor tests/sintatico/<nome do teste>

    Rodar com o valgrind no primeiro teste sintatico (gera o arquivo de saida logfile.out):
    $ make memcheck

    Limpar arquivos:
    $ make clean

    Para testar no Interpretador de TAC, baixe o repositório 
    https://github.com/lhsantos/tac e gere o executável de acordo com as 
    instruções do pdf do diretório "doc". Por fim, copie o executável
    chamado "tac" para o diretório principal deste trabalho e execute
    a seguinte linha de comando:
    $ ./tac tests/tradutor/<nome_do_teste.tac>

Troubleshoot:
    Precisa atualizar o bison para a versão 3.7?
        $ bison --version
        $ sudo apt-get update -y
        $ sudo apt-get install -y bison

    Precisa atualizar o gcc para a versão 11?
        Instale e use o "gcc-11" para compilar:
        $ sudo apt-get update gcc-11
        
    Problema com o comando "ld" não encontrado?
        Instale com o comando:
        $ sudo apt-get install --reinstall binutils
        $ ld -v