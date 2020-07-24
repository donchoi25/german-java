clear
echo "Running exe"
bison -d german-java.y
flex german-java.l
make
./a.out test.file
exit 0