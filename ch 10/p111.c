/*Converting a numerical char to its int value*/

#include <stdio.h>

int main ( void )

	{
		
		int str_to_int ( char num [] ) ;
		
		printf ( "%i\n", str_to_int ( "245" ) ) ;
		printf ( "%i\n", str_to_int ( "100") + 25 ) ;
		printf ( "%i\n", str_to_int ( "13x5" ) ) ;
		printf ( "%i\n", str_to_int ( "-45") ) ;
		
		return 0;
		
	}
	
int str_to_int ( char num [] )

	{
		
		int result = 0, buffer ;
		int i = 0 ;
		if ( num [0] == '-' )
		 i = 1 ;
		
		for ( ; (num [i] >= '0' && num [i] <= '9'); i++ )
				{
					buffer = num [i] - '0' ;
					result = result * 10 + buffer ;
				}
				
		if ( num [0] == '-' )
		 result = -result ;
					
		return result ; 
			
	}