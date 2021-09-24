/*Copying files using cmd line arg(s)*/
#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv []) {
	FILE *in, *out ;
	in = fopen("copy1.txt", "r") ;
	out = fopen("result.txt", "w") ;			
	char c ;							//Var Deck
	
	if(argc != 3) {										//Check for correct number of cmd line arg(s)
		fprintf(stderr, "Incomplete arguments\n") ;
		return 1 ;
	}
	if ( (in = fopen(argv[1], "r")) == NULL ) {			//Check if input file exists
		fprintf(stderr, "Incorrect input file\n") ;
		return 2 ;
	}
	goto click ;
	printf("I'm gonna skip this\n") ;
	
	click: if ( (out = fopen(argv[2], "w")) == NULL ) {			//Check if output file exists
		fprintf(stderr, "Incorrect output file\n") ;
		return 3 ;
	}
	while( (c = getc(in)) != EOF )		//Copy file
	 putc(c, out) ;
	 
	printf("FILE COPIED\n") ;
	fclose(in) ;
	fclose(out) ; 
	return 0 ;
}