/*Sizes*/
#include <stdio.h>
enum ca_type {Test, Assignment, CRE} ;
#define total_entries 3

int main (void) {
	int i = sizeof(int) ;
	printf("Int = %i\n", i) ;
	int c = sizeof(char) ;
	printf("Char = %i\n", c) ;
	int f = sizeof(float) ;
	printf("Float = %i\n", f) ;
	int d = sizeof(double) ;
	printf("Double = %i\n", d) ;
	
	int array [10] ;
	int a = sizeof(array) ;
	printf("10 int array = %i\n", a) ;
	
	struct CA {
		enum ca_type format ;
		union {
			char c ;
			int mark ;
		} status ;
	    int day ;
		int month ;
		char *subject ;
	} table[total_entries] ;
	
	int se = sizeof(table[0]) ;
	int sa = sizeof(table) ;
	printf("Struct element = %i\nStruct array = %i\nElement count = %i\n", se, sa, sizeof(table)/sizeof(table[0]) ) ;
	
	return 0 ;
}