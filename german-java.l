%{
	#include "german-java.tab.h"
%}
	int num_lines = 0, num_chars = 0;
%option noyywrap
%%
\n	   		++num_lines; ++num_chars;
.	   		++num_chars;
"boolean"	printf("%d\n", yylloc.first_line);

%%
int main(int argc, char **argv){
	// open file
	FILE *myfile = fopen(argv[1], "r");

	//make sure file is valid
	if(!myfile){
		printf("%s", "Can't open file");
		return -1;
	}

	// set lex to read from file
	yyin = myfile;

	//lex through the input
	while(yylex());

	printf( "# of lines = %d, # of chars = %d\n",
			   num_lines, num_chars );
}
