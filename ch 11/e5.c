/*Implementing a doubly linked list*/
#include <stdio.h>

struct entry
 {
 	struct entry *previous ;
	int value ;
	struct entry *next ;
 } ;
 
int main (void)
 {
 	struct entry n1, n2, n3, n4, n5, zero, *list ;		//Setting up doubly linked list
	n1.value = 6 ;
	n2.value = 8 ;
	n3.value = 10 ;
	n4.value = 15 ;
	n5.value = 17 ;
	n1.previous = &zero ;
	n2.previous = &n1 ;
	n3.previous = &n2 ;
	n4.previous = &n3 ;
	n5.previous = &n4 ;
	zero.next = &n1 ;
	n1.next = &n2 ;
	n2.next = &n3 ;
	n3.next = &n4 ;
	n4.next = &n5 ;
	n5.next = (struct entry *) 0 ;		//Null pointer
	
	list = zero.next ;		//Printing list
	while (list)
	 {
	 	printf ("%i ", list->value) ;
		list = list->next ;
	 }
	printf ("\n") ;
	return 0 ;
 }