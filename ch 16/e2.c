/*Creating file copy converting all char to upper case*/
#include <stdio.h>

int main (void) {
	FILE *in, *out ;
	char array1[64], array2[64] ;
	int c ;
	
	printf("Enter file to convert: ") ;
	scanf("%63s", array1) ;
	if ( (in = fopen (array1, "r") ) == NULL )	{
	 printf("Error\n") ;
	 return 1 ;
	}
	
	out = fopen("output.txt", "w") ; 
	while ( (c = getc(in)) != EOF )	{
		if( c >= 'a' && c <= 'z' )
		 c = c - 'a' + 'A' ;
		putc(c, out) ;	
	}
	
	printf("COPIED\n") ;
	return 0 ;
}