/*Union in struct*/
#include <stdio.h>
enum ca_type {Test, Assignment, CRE} ;
#define total_entries 3

int main (void) {
	
	struct CA {
		enum ca_type format ;
		union {
			char c ;
			int mark ;
		} status ;
	    int day ;
		int month ;
		char *subject ;
	} table [total_entries] ;
	
	table[0].format = CRE ;
	table[0].status.mark = 9 ;
	table[0].month = 8 ;
	table[0].day = 21 ;
	table[0].subject = "IPR" ;
	
	table[1].format = Test ;
	table[1].status.c = 'P' ;
	table[1].month = 8 ;
	table[1].day = 23 ;
	table[1].subject = "Company law" ;
	
	table[2].format = Assignment ;
	table[2].status.c = 'A' ;
	table[2].month = 8 ;
	table[2].day = 23 ;
	table[2].subject = "PIL" ;
	
	for (int i = 0; i < total_entries; i++) {
		switch (table[i].format) {
			case Test :
				printf("Test for %s on %-2i.%-2i Status - %c\n", table[i].subject, table[i].day, table[i].month, table[i].status.c) ;
				break ;
			case CRE :
				printf("CRE for %s on %-2i.%-2i Status - %i\n", table[i].subject, table[i].day, table[i].month, table[i].status.mark) ;
				break ;
			case Assignment :
				printf("Assignment for %s on %-2i.%-2i Status - %c\n", table[i].subject, table[i].day, table[i].month, table[i].status.c) ;
				break ;
			default :
				printf("Undefined CA type\n") ;
		}
	 }
	printf("DATA PRINTED\n") ;
	return 0 ;	
	}