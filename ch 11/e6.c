/*Inserting and removing elements from a doubly linked list*/
#include <stdio.h>

struct entry
 {
 	struct entry *previous ;
	int value ;
	struct entry *next ;
 } ;
 
int main (void)
 {
 	void dll_insert (struct entry *listElement, struct entry *insert) ;		//Function declarations
	void dll_remove (struct entry *delete) ;
	void dll_print (struct entry *list)	;
	struct entry n1, n2, n3, n4, n5, zero, *list, k ;		//Setting up doubly linked list
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
	dll_print (zero.next) ;		
	k = (struct entry) {.value = 42} ;
	dll_insert (&n2, &k) ;		//Function call to insert element k
	dll_print (zero.next) ;
	dll_remove (&k) ;		//Function call to delete k
	dll_print (zero.next) ;
	return 0 ;
 }
 
void dll_insert (struct entry *listElement, struct entry *insert)		//Function to insert an element in doubly linked list
 {
 	insert->next = listElement->next ;		//link k to n3
	insert->previous = listElement ;		//link k to n2
	listElement->next->previous = insert ;		//link n3 to k
	listElement->next = insert ;		//link n2 to k              
 } 

void dll_remove (struct entry *delete)		//Function to remove element from doubly linked list 
 {
 	delete->previous->next = delete->next ;		//Link n2 to n3
	delete->next->previous = delete->previous ; 		//Link n3 to n2
 }
 
void dll_print (struct entry *list)		//Function to print a doubly linked list
 {
 	while (list)
	 {
	 	printf ("%i ", list->value) ;
		list = list->next ;
	 }
	printf ("\n") ;
 }