/*Using enum data types to print name of the month*/
#include <stdio.h>

enum month { january = 1, february, march, april, may, june,\
	july, august, september, october, november, december } ;
	
int main (void) {
 	char * monthName (enum month entry) ;		//Funk deck
	printf("Enter month: ") ;
	enum month input ;			//Enum data type variable
	scanf("%i", &input) ;
	printf("%s\n", monthName(input) ) ;		//Function call to print month name
	return 0 ;
 }

char * monthName (enum month entry) {
 	switch (entry) {
		case january:
			return "january" ;
			break ;
		case february:
			return "february" ;
			break ;
		case march:
			return "march" ;
			break ;
		case april:
			return "april" ;
			break ;
		case may:
			return "may" ;
			break ;
		case june:
			return "june" ;
			break ;
		case july:
			return "july" ;
			break ;
		case august:
			return "august" ;
			break ;
		case september:
			return "september" ;
			break ;
		case october:
			return "october" ;
			break ;
		case november:
			return "november" ;
			break ;
		case december:
			return "december" ;
			break ;
		default:
			return "Inavlid entry" ;
	}
 }