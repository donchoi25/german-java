CC=gcc

CFLAGS=-c -Wall

all: main

main: german-java.tab.o lex.yy.o
	$(CC) german-java.tab.o lex.yy.o -o german-java
	./german-java test.file

german-java.tab.o: german-java.y
	bison -d german-java.y
	$(CC) $(CFLAGS) -c german-java.tab.c

lex.yy.o: german-java.l
	flex german-java.l
	$(CC) $(CFLAGS) -c lex.yy.c

clean:
	rm -rf *o main