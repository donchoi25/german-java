clear
echo "Running exe"
bison -d german-java.y
flex german-java.l
gcc german-java.tab.c lex.yy.c 
./a.out test.file
exit 0