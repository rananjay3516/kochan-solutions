/*Display 20 lines at a time, with option to terminate*/
#include <stdio.h>

int main (void) {
	FILE *in = fopen("e6.txt", "r") ;
	char buffer[128] ;
	char c ;
	
	while( feof(in) == 0 ) {			//Copying 20 lines to terminal
		for(int i = 0; i < 20; i++) {
			fgets (buffer, 167, in) ;
			if( feof(in) )		//Exit if eof true
		 	 return 1 ;
			fputs (buffer, stdout) ;
		}
		if( feof(in) )		//Exit if eof true
		 return 1 ;
		 
		printf("\nEnter 'q' to stop or any other char to continue copying: ") ;		//Asking user whether to continue
		scanf("%c", &c) ;
		if(c == 'q' || c == 'Q')
		 return 1 ;
	}
	return 0 ;
}