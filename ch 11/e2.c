/*Inserting element inside a linked list*/

#include <stdio.h>

struct entry
 {
 	int value ;
	struct entry *next ;
 } ;
 
int main (void)
 {
 	void ll_insert (struct entry *insert, struct entry *listElement) ;		//Function declaration
	struct entry n1, n2, n3, n4, n5, *list ;		//Setting up linked list 
	list = &n1 ;
	n1.value = 15 ;
	n2.value = 16 ;
	n3.value = 17 ;
	n4.value = 18 ;
	n5.value = 19 ;
	n1.next = &n2 ;
	n2.next = &n3 ;
	n3.next = &n4 ;
	n4.next = &n5 ;
	n5.next = (struct entry *) 0 ;		//Null pointer
	while (list)		//Printing list
	 {
	   printf ( "%i ", list->value ) ;
	   list = list->next ;
	 }
	printf ("\n") ;
	
	struct entry cos ;  
	cos = (struct entry) {314} ;		//Declaring new struct entry var
	ll_insert (&cos, &n2) ;		//Function call to insert it into linked list
	list = &n1 ;
	while (list)		//Printing list
	 {
	   printf ( "%i ", list->value ) ;
	   list = list->next ;
	 }
	printf ("\n") ;
	return 0 ;
 }
 
//Function to insert an element in linked list
void ll_insert (struct entry *insert, struct entry *listElement)
 {
 	insert->next = listElement->next ;
	listElement->next = insert ;
 }