#include <stdio.h>

struct date

	{
		int day ;
		int month ;
		int year ;
	} ;
	
struct time

	{
		int hour ;
		int minute ;
		int second ;
	} ;
	
struct dateTime 

	{
		struct date date ;
		struct time time ;
	} ;
	
	
int main ( void )

	{
		struct dateTime marines [ 100 ] ;
		
		marines [ 65 ].date.month = 3 ;
		
		marines [ 34 ].time = ( struct time ) { 4, 17, 34 } ;
		
		printf ( "Month = %i and Time = %.2i:%.2i:%.2i\n", marines [ 65 ].date.month, marines [ 34 ].time.hour, marines [ 34 ].time.minute, marines [ 34 ].time.second ) ;
		
		return 0 ;
	}