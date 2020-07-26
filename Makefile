#compiled with c++ compiler
CC=g++

CFLAGS=-c -Wall

#header files
DEPS=$(wildcard $(IDIR)/*.h)

#flex bison objects
FB_OBJ=$(ODIR)/parser.tab.o $(ODIR)/lex.yy.o

#all target objects, generated from src dir
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

$(ODIR)/lex.yy.o: lex.yy.c lexer.l
	flex lexer.l
	$(CC) $(CFLAGS) lex.yy.c -o $@

$(ODIR)/%.o: $(SDIR)/%.cpp $(DEPS)
	./HeaderGen.sh
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(ODIR)/*.o