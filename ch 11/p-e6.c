/*Linked list*/

#include <stdio.h>

struct entry
 {
 	int value ;
	struct entry *next ;
 } ;
 
int main (void)

 {
 	struct entry n1, n2, n3, n2_a ;
	n1.value = 1 ;
	n2.value = 10 ;
	n3.value = 20 ;
	n2_a.value = 42 ;
	n1.next = &n2 ;
	n2.next = &n3 ;
	n1.next = n2.next ;
	n2_a.next = n1.next ;
	n1.next = &n2_a ;
	printf ( "%i ", n1.value ) ;
	printf ( "%i\n", n1.next->value ) ;
	return 0 ;
 }