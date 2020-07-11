To compile files:

bison -d german-java.y
flex german-java.l
gcc german-java.tab.c lex.yy.c 
./a.out