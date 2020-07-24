CC=g++

CFLAGS=-c -Wall

all: main

main: parser.tab.o lex.yy.o
	$(CC) parser.tab.o lex.yy.o -o german-java
	./german-java test.file

parser.tab.o: parser.y
	bison -d parser.y
	$(CC) $(CFLAGS) -c parser.tab.c

lex.yy.o: lexer.l
	flex lexer.l
	$(CC) $(CFLAGS) -c lex.yy.c

clean:
	rm -- !("lexer.l"|"parser.y"|"Makefile"|"README.md"|"test.file")