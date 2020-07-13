# German Java

German Java is a language meant to emulate Java but in German

## Usage
To compile files:

```bash
bison -d german-java.y
flex german-java.l
gcc german-java.tab.c lex.yy.c 
./a.out test.file
```
