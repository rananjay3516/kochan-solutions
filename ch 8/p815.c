/*Using static variables*/

#include <stdio.h>

void staticVar ( void )

	{
		auto int auto_var = 100 ;
		//Declaring static variable - preserves value and is initialised just once when the function is called for the first time
		static int stat_var = 100 ;
		
		printf ( "Automatic variable = %d Static variable = %d\n", auto_var, stat_var ) ;
		
		auto_var++ ;
		stat_var++ ;
	}

int main ( void )

	{
		void staticVar ( void ) ;
		
		for ( int i = 0; i < 7; i++ )
			staticVar() ;
		
		return 0;
	}