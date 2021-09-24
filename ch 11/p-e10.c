/*Finding a value in a linked list and returning the result*/
#include <stdio.h>

struct entry
 {
 	int value ;
	struct entry *next ;
 } ;
 
struct entry * locate ( struct entry *lst_ptr, int input )		//Function to locate a value inside a linked list
 {
 	while ( lst_ptr != (struct entry *) 0 )
	 {
	 	if ( lst_ptr->value == input )
		 return lst_ptr ;
		lst_ptr = lst_ptr->next ;
	 }
	return lst_ptr ;
 }
 
int main (void)
 {
 	struct entry * locate ( struct entry *lst_ptr, int input ) ;		//Function declaration
	struct entry n1, n2, n3, n4, *lst = &n1, *result ;		//Struct variables declaration and list pointer initialisation
	n1.value = 10 ;			//Initialisation of struct varibales values 
	n2.value = 32 ;
	n3.value = 42 ;
	n4.value = 99 ;
	n1.next = &n2 ;
	n2.next = &n3 ;
	n3.next = &n4 ;
	n4.next = (struct entry *) 0 ;		//Null pointer
	int match ;
	
	printf ( "Enter value : " ) ;		//Asking for input to locate
	scanf ( "%i", &match ) ;
	result = locate ( lst, match ) ;		//Function call
	if ( result != (struct entry *) 0 )			//Displaying result
	  printf ( "Located : %i\n", result->value ) ;
	else
	 printf ( "Not found\n") ;
	return 0 ;
 }