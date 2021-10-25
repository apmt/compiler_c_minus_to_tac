CFLAGS = -std=c18 -std=c99 -Wall -Wextra -Wpedantic -g
CC = gcc-11

all: lib/tradutor_utils.h src/tradutor_utils.c src/lexico.l src/sintatico.y
	bison -v -Wcounterexamples --defines=lib/sintatico.tab.h src/sintatico.y -o src/sintatico.tab.c
	flex -o src/lex.yy.c src/lexico.l
	${CC} ${CFLAGS} -I lib/ -Wall -o tradutor src/sintatico.tab.c src/lex.yy.c src/tradutor_utils.c -lfl

run:
	./tradutor tests/tradutor/correto_teste_1.c
	./tradutor tests/tradutor/correto_teste_2.c

memcheck:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor tests/tradutor/correto_teste_1.c

.PHONY: clean
clean:
	rm -f lib/sintatico.tab.h src/lex.yy.c src/sintatico.tab.c tradutor logfile.out src/sintatico.output tree_output_file.txt
