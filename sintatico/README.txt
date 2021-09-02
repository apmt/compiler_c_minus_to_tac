Requisitos:

$ sudo apt-get install flex
$ sudo apt-get install bison
$ sudo apt-get install valgrind

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