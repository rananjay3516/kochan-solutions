/*Program to determine tomorrow's date*/

#include <stdio.h>

int main ( void )

	{
		//Structure definition for storing date
		struct date
			
			{
				int day ;
				int month ;
				int year ;
			} ;
			
		//Declaring structure variables
		struct date today, tomorrow ;
		
		//Getting user input for today's date
		printf ( "Enter today's date (mm dd yyyy) : " ) ;
		scanf ( "%i %i %i", &today.month, &today.day, &today.year ) ;
		
		//Array containing last date of the 12 months
		const int last_date [ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
		
		//Calculating tomorrow's date
		
		//Not the last day of the month
		if ( today.day != last_date [ today.month - 1 ] ) 
		
			{
				
				tomorrow.day = today.day + 1 ;
				tomorrow.month = today.month ;
				tomorrow.year = today.year ;
				
			}
		
		//Last day of the year	
		else if ( today.month == 12 )
		
			{
				
				tomorrow.day = 1 ;
				tomorrow.month = 1 ;
				tomorrow.year = today.year + 1 ;
				
			}
			
		//Last day of the month
		else
		
			{
				
				tomorrow.day = 1 ;
				tomorrow.month = today.month + 1 ;
				tomorrow.year = today.year ;
				
			}
			
		//Printing tomorrow's date
		printf ( "Tomorrow's date is %i/%i/%.2i\n", tomorrow.month, tomorrow.day, tomorrow.year % 100 ) ;
		
		return 0 ;
			
			
	}