/*Program to use a date and time structure and functions to update date and time*/

#include <stdio.h>
#include <stdbool.h>

struct date

	{
		int day ;
		int month ;
		int year ;
	} ;
	
struct time 

	{
		int hours ;
		int minutes ;
		int seconds ;
	} ;
	
struct date_time

	{
		struct date sdate ;
		struct time stime ;
	} ;
	
int main ( void )

	{
		
		//Function declaration
		struct date_time clock_keeper ( struct date_time x ) ;
		
		//Declaration of struct date_time variable
		struct date_time event ;
		
		//Getting date and time input and storing in date_time structure variable, event
		printf ( "Enter date (dd:mm:yyyy) : " ) ;
		scanf ( "%i:%i:%i", &event.sdate.day, &event.sdate.month, &event.sdate.year ) ;
		
		printf ( "Enter time (hh:mm:ss) : " ) ;
		scanf ( "%i:%i:%i", &event.stime.hours, &event.stime.minutes, &event.stime.seconds ) ;
		
		//Function call to update clock - updating both time and date
		event = clock_keeper ( event ) ;
		
		printf ( "\nUpdated Time (hh:mm:ss) = %.2i:%.2i:%.2i\n", event.stime.hours, event.stime.minutes, event.stime.seconds ) ;
		
		printf ( "\nUpdated Day (dd:mm:yyyy) = %.2i:%.2i:%i\n\n", event.sdate.day, event.sdate.month, event.sdate.year ) ;
		
		return 0 ;
		
	}
	
//Function to update both date and time

struct date_time clock_keeper ( struct date_time x )

	{
		
		//Function declarations
		struct time time_update ( struct time now ) ;
		struct date dateUpdate ( struct date today ) ;
		
		//Function call to update time
		x.stime = time_update ( x.stime ) ;
		
		//Check if time crosses midnight - update date
		if ( x.stime.hours == 0 && x.stime.minutes == 0 && x.stime.seconds == 0 )
			x.sdate = dateUpdate ( x.sdate ) ;
			
		return x ; 
		
	}
	
//Function to update time
struct time time_update ( struct time now )

{
	//Update time by one second
	now.seconds ++ ;
	
	//Adjust hours, minutes and seconds
	
	if ( now.seconds == 60 )
		
		{
			now.minutes ++ ;
			now.seconds = 0 ;
			
			if ( now.minutes == 60 )
				
				{
					now.hours ++ ;
					now.minutes = 0 ;
					
					if ( now.hours == 24 )
						
						{
							now.hours = 0 ;
						}
						
				}
				
		}
	
	return now ;
	
}

//Function to update date by one day	
struct date dateUpdate ( struct date today )

	{
		//Function decalaration
		int numberOfDays ( struct date d ) ;
		
		//Declaring structure date variable to store updated date
		struct date tomorrow ;
		
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