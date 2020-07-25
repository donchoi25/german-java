CC=g++

CFLAGS=-c -Wall

DEPS=nodes.h

_OBJ=parser.tab.o lex.yy.o AstNode.o
OBJ= $(patsubst %,$(ODIR)/%,$(_OBJ))

ODIR=obj
SDIR=src

all: main

main: $(OBJ)
	$(CC) $^ -o german-java
	./german-java test.file

$(ODIR)/parser.tab.o: parser.tab.c parser.y
#generates bison parser
	bison -d parser.y
#compiles master header file
	#./HeaderGen.sh 
	$(CC) $(CFLAGS) parser.tab.c -o $@

$(ODIR)/lex.yy.o: lex.yy.c lexer.l
	flex lexer.l
	$(CC) $(CFLAGS) lex.yy.c -o $@

$(ODIR)/%.o: $(SDIR)/%.cpp
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(ODIR)/*.o