/*Linked list traversing*/

#include <stdio.h>

struct entry
 {
 	int value ;
	struct entry *next ;
 } ;
 
int main (void)

 {
 	struct entry n1, n2, n3, *list ;
	n1.value = 10 ;		//Initialising values
	n2.value = 11 ;
	n3.value = 13 ;
	list = &n1 ;		//List pointer
	n1.next = &n2 ;		//Linking the list
	n2.next = &n3 ;
	n3.next = (struct entry *) 0 ;		//Null pointer
	while ( list != (struct entry *) 0 )
	 {
	 	printf ( "%i\n", list->value ) ;
		list = list->next ;
	 }
	return 0 ;
 }