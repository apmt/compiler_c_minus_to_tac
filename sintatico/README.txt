Compilar (TERMINAL NO DIRETÓRIO PRINCIPAL DO TRABALHO):
$ make

Executar testes (TERMINAL NO DIRETÓRIO PRINCIPAL DO TRABALHO):
    Rodar todos testes sintaticos:
    $ make run
    Rodar teste específico:
    $ ./tradutor < tests/sintatico/<nome do teste>
    Rodar com o valgrind em todos os testes (gera o arquivo de saida logfile.out):
    $ make memcheck
    Limpar arquivos:
    $ make clean

Visualize a AST:
    1. Pegue o conteúdo do arquivo "tree_output_file.txt"
    2. Remova todas as ocorrências de underscore "_"
    3. Use o texto resultante como entrada para a seguinte ferramenta: https://ironcreek.net/syntaxtree/

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