/*Copying columns m through n of each line*/
#include <stdio.h>

int main (void) {
	FILE *in = fopen("e5.txt", "r") ;
	int m, n ;
	char buffer[128] ;							//Var deck
	
	printf("Enter m: ") ;
	scanf("%2i", &m) ;
	printf("Enter n: ") ;
	scanf("%2i", &n) ;				//Get input from terminal
	
	while( feof(in) == 0 ) {
		fgets (buffer, m, in) ;			//Read upto m
		fgets (buffer, (n-m+2), in) ;		//Replace buffer with relevant char(s)
		fputs (buffer, stdout) ;		//Print char(s)
		fgets (buffer, 127, in) ;		//Read upto rest of the line
		fputc ('\n', stdout) ;		
	}
	return 0 ;
}