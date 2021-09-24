/*Program to determine tomorrow's date*/

#include <stdio.h>
#include <stdbool.h>

//Global structure definition for storing date
		struct date
			
			{
				int day ;
				int month ;
				int year ;
			} ;


int main ( void )

	{
		
		//Function decalaration
		int numberOfDays ( struct date d ) ;
			
		//Declaring structure variables
		struct date today, tomorrow ;
		
		//Getting user input for today's date
		printf ( "Enter today's date (mm dd yyyy) : " ) ;
		scanf ( "%i %i %i", &today.month, &today.day, &today.year ) ;
		
		
		//Calculating tomorrow's date
		
		//Not the last day of the month
		if ( today.day != numberOfDays ( today ) ) 
		
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
	
//Function to determine last day of the month
int numberOfDays ( struct date d )

	{
		//Function decalaration
		bool isLeapYear ( struct date d ) ;
		
		//Array containing last date of the 12 months 
		const int last_date [ 12 ] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
		
		//If it's a leap year and the argument month is Feb
		if ( isLeapYear ( d ) && d.month == 2 )
		
			{
				int feb = 29 ;
				return feb ;
			}
		
		//The month is not Feb		
		else
			return last_date [ d.month - 1 ] ;
		
		
	}
	
//Function to check for a leap year
bool isLeapYear ( struct date d )

	{
		bool flag ;
		
		if ( d.year % 400 == 0 || d.year % 4 == 0 && d.year % 100 != 0 )
			flag = true ;
			
		else
			flag = false ;
			
		return flag ;
		
	}






