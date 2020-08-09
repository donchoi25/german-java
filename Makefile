#compiled with c++ compiler
CC=g++

CFLAGS=-c -Wall -ggdb

#header files
DEPS=$(wildcard $(IDIR)/*.h)

#flex bison objects
FB_OBJ=$(ODIR)/parser.tab.o $(ODIR)/lex.yy.o

#all target objects, generated from .ccp in src
OBJ= $(patsubst $(SDIR)/%.cpp,$(ODIR)/%.o,$(wildcard $(SDIR)/*.cpp))

#directories
ODIR=obj
SDIR=src
IDIR=include

all: main

main: $(FB_OBJ) $(OBJ) 
	$(CC) $^ -o german-java
	./german-java test.file

$(ODIR)/parser.tab.o: parser.tab.c parser.y $(IDIR)/nodes.h
#generates bison parser
	bison -d parser.y
#compiles master header file 
	$(CC) $(CFLAGS) parser.tab.c -o $@
	./HeaderGen.sh

$(ODIR)/lex.yy.o: lexer.l
	flex lexer.l
	$(CC) $(CFLAGS) lex.yy.c -o $@

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(ODIR)/*.o