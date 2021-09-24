/*Updating date to next day using pointers*/
#include <stdio.h>
#include <stdbool.h>

struct date
 {
 	int day ;
	int month ;
	int year ;
 } ;
 
int main (void)
 {
 	void date_update (struct date *n1) ;		//Function declaration
	struct date entry ;
	printf ("Enter the date (dd.mm.yyyy) : ") ;
	scanf ("%i.%i.%i", &entry.day, &entry.month, &entry.year) ;
	date_update (&entry) ;
	printf ("Tomorrow's date : %.2i:%.2i:%.2i\n", entry.day, entry.month, entry.year) ;
	return 0;
 }

void date_update (struct date *n1)
 {
 	int numberOfDays (struct date *n1) ;		//Function declaration
	if (n1->day == numberOfDays (n1) )		//If day is last day of month
	 if (n1->month == 12)		//If month is December
	  {
	  	n1->day = 1 ;
		n1->month = 1 ;
		n1->year++ ;
	  }
	 else					//If month is not December
	  {
	  	n1->day = 1 ;
		n1->month++ ;
	  }
	else											//If day is not last day of the month
	 n1->day++ ;
 }
 
int numberOfDays (struct date *n1)			//Functin to calculate total days in a month
 {
 	bool is_leap (int year) ;		//Function declaration
	int days [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} ;
	if (n1->month == 2)
	 {
	 	if (is_leap (n1->year) )
		 return 29 ;
		else
		 return 28 ;
	 }
	return days [n1->month] ;
 }

bool is_leap (int year)			//Function to check if a year is a leap year
 {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	 return true ;
	else
	 return false ;
 }


