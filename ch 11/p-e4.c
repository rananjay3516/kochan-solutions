/*Pointer to structure*/

#include <stdio.h>

struct date
{
	int day ;
	int month ;
	int year ;
} ;

int main (void)

 {
    struct date today, *seven = &today ;
	(*seven).day = 7 ;
	seven->month = 7 ;
	seven->year = 2017 ;
	printf ( "Date - %i.%i.%i\n", seven->day, seven->month, seven->year % 1000 ) ;
	return 0;
 }