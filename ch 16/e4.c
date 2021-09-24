/*Copying lines alternatively from two files into one*/
#include <stdio.h>

int main (void) {
	FILE *in1, *in2 ;
	int c1, c2 ;
	in1 = fopen("input1.txt", "r") ;
	in2 = fopen("input2.txt", "r") ;
	char buffer1[128], buffer2[128] ;		//Variables and pointers deck
	
	while ( ( c1 = (feof(in1)) ) == 0 || ( c2 = (feof(in2)) ) == 0 ) {		//Loop to execute until EOF for both files true
		fgets (buffer1, 127, in1) ;
		if ( feof(in1) == 0 )
		 fputs (buffer1, stdout) ;
		
		fgets (buffer2, 127, in2) ;
		if ( feof(in2) == 0 )
		 fputs (buffer2, stdout) ;	
	} 
}