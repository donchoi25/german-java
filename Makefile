CC=g++

CFLAGS=-c -Wall

DEPS=nodes.h

ODIR=obj

all: main

main: $(ODIR)/parser.tab.o lex.yy.o
	$(CC) $(ODIR)/parser.tab.o lex.yy.o -o german-java
	./german-java test.file

$(ODIR)/parser.tab.o: parser.y 
#generates bison parser
	bison -d parser.y
#compiles master header file
	#./HeaderGen.sh 
	$(CC) $(CFLAGS) parser.tab.c -o $(ODIR)/parser.tab.o

lex.yy.o: lexer.l
	flex lexer.l
	$(CC) $(CFLAGS) lex.yy.c

clean:
	rm -rf -- !("lexer.l"|"parser.y"|"Makefile"|"README.md"|"test.file")