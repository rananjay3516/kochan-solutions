/*Creating a file copy*/
#include <stdio.h>
int main (void)
 {
 	int c ;		
	FILE *in, *out ;
	char buffer1[64], buffer2[64] ;
	
	printf("Enter file name to copy from: ") ;		//Get input file from user
	scanf("%63s", buffer1) ;
	if( (in = fopen(buffer1, "r") ) == NULL ) 		//Check if file name is correct
	 {
	 	printf("Unable to locate input file\n") ;
	 	return 1 ;
	 }		
	
	printf("Enter file name to copy to: ") ;		//Get output file from user
	scanf("%63s", buffer2) ; 
	if( (out = fopen(buffer2, "w") ) == NULL )  	//Check if file name is correct
	 {
	 	printf("Unable to locate output file\n") ;
		return 2 ;
	 } 
	  
	while( (c = getc(in)) != EOF )		//Copying input file into output 
	 putc(c, out) ;
	printf("FILE COPIED\n") ; 
	
	return 0 ;
 }