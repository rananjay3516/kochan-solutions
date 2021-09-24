/*Converting a floating point numerical char to its fp value*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main ( void )

	{
		
		float str_to_float ( char num [] ) ;
		
		printf ( "%f\n", str_to_float ( "2.45" ) ) ;
		printf ( "%f\n", str_to_float ( "100.9") + 25 ) ;
		printf ( "%f\n", str_to_float ( "1.3x5.6" ) ) ;
		printf ( "%f\n", str_to_float ( "-4.5") ) ;
		
		return 0;
		
	}
	
float str_to_float ( char num [] )

	{
		
		float result = 0, buffer ;
		bool is_float = false ;
		int i = 0, dot ;
		if ( num [0] == '-' )
		 i = 1 ;
		
		for ( ; (num [i] >= '0' && num [i] <= '9') || num [i] == '.'; i++ )
				{
					if ( num [i] == '.' )
					 {
					  dot = i ;
					  is_float = true ;
					 }
					else
					 {
					  buffer = num [i] - '0' ;
					  result = result * 10 + buffer ;
					 }
				}
				
		if ( is_float )
		 {
		 	int divisor = 1 ;
			int element = strlen (num) - dot - 1 ;
			for ( int i = 0; i < element; i++ )
			 divisor *= 10 ;
			result = result / divisor ;
		 }
		
		if ( num [0] == '-' )
		 result = -result ;
					
		return result ; 
			
	}