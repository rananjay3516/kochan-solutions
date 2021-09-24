/*Program to determine tomorrow's date*/

#include <stdio.h>
#include <stdbool.h>

//Global structure definition for storing date, and structure variable declaration
		struct date
			
			{
				int day ;
				int month ;
				int year ;
			} tomorrow ;
	
	
int main ( void )

	{
		
		//Function declaration
		struct date dateUpdate ( struct date today ) ;
			
		//Declaring structure variables
		struct date today ;
		
		//Getting user input for today's date
		printf ( "Enter today's date (mm dd yyyy) : " ) ;
		scanf ( "%i %i %i", &today.month, &today.day, &today.year ) ;
		
		//Calling function to update date
		tomorrow = dateUpdate ( today ) ;
			
		//Printing tomorrow's date
		printf ( "Tomorrow's date is %i/%i/%.2i\n", tomorrow.month, tomorrow.day, tomorrow.year % 100 ) ;
		
		return 0 ;
					
	}

//Function to update date by one day	
struct date dateUpdate ( struct date today )

	{
		//Function decalaration
		int numberOfDays ( struct date d ) ;
		
		//Calculating tomorrow's date
		
		//Not the last day of the month
		if ( today.day != numberOfDays ( today ) ) 
			
			tomorrow = ( struct date ) { .day = today.day + 1, .year = today.year, .month = today.month } ;
				
		//Last day of the year	
		else if ( today.month == 12 )
		
			tomorrow = ( struct date ) { 1, 1, today.year + 1 } ;
				
			
		//Last day of the month
		else
		
			tomorrow = ( struct date ) { 1, today.month + 1, today.year } ;
			
		return tomorrow ;
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






