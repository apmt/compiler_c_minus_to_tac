Requisitos:

$ sudo apt-get install flex
$ sudo apt-get install valgring

Compilar (TERMINAL NO DIRETÓRIO PRINCIPAL DO TRABALHO):

$ flex -o src/lex.yy.c src/lexico.l
$ gcc -g -Wall src/lex.yy.c -o tradutor

Executar testes (TERMINAL NO DIRETÓRIO PRINCIPAL DO TRABALHO):

Teste correto_teste_1.c:
$ valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor < tests/correto_teste_1.c

Teste correto_teste_2.c:
$ valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor < tests/correto_teste_2.c

Teste errado_teste_1.c:
$ valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor < tests/errado_teste_1.c

Teste errado_teste_2.c:
$ valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor < tests/errado_teste_2.c
