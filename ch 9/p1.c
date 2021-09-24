/*Program to illustrate a structure*/

#include <stdio.h>

int main ( void )

	{
		
		//Defining structure for storing a date
		struct date
			
			{
				int day ;
				int month ;
				int year ;
			} ;
		
		
		//Declaring date structure variable	
		struct date today ;
		
		
		//Assgining values
		today.month = 04 ;
		today.day = 30 ;
		today.year = 2007 ;
		
		
		//Printing the date
		printf ( "The date today is %i/%i/%.2i, in the %ist century\n", today.month, today.day, today.year % 100, today.year / 100 + 1 ) ;
		
		return 0 ;
		
		
	}