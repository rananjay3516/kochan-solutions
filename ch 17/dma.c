/*DMA in linked list*/
#include <stdio.h>
#include <stdlib.h>
#define total_elem 3

struct entry{
	int value ;
	struct entry *next ;
} ;

int main (void) {
	
	struct entry account[total_elem] ;						//Struct array
	struct entry * add_ll_elem (struct entry *list_ptr) ;		//Funk deck	
	account[0].value = 12 ;			//Initialising list elements
	account[1].value = 13 ;
	account[2].value = 14 ;
	account[0].next = &account[1] ;
	account[1].next = &account[2] ;
	account[2].next = (struct entry *) 0 ;
	
	struct entry *list_ptr = account ;
	while(list_ptr != (struct entry *) 0 ) {
		printf("%i\n", list_ptr->value) ;
		list_ptr = list_ptr->next ;
	}
	
	list_ptr = account ;					//Adding new item 
	struct entry *newItem = add_ll_elem(list_ptr) ;
	newItem->value = 42 ;			//Initialising new item's value 
	printf("New item added = %i\n", newItem->value) ;		//Printing new item
	
	printf("UPDATED LIST\n") ;				//Print updated list
	while(list_ptr != (struct entry *) 0 ) {
		printf("%i\n", list_ptr->value) ;
		list_ptr = list_ptr->next ;
	}
	return 0 ;
}

struct entry * add_ll_elem (struct entry *list_ptr) {
	
	while(list_ptr->next != (struct entry *) 0 )
		list_ptr = list_ptr->next ;					//Traversing to the last item of the list
	
	list_ptr->next = (struct entry *) malloc (sizeof(struct entry) ) ;		//Creating memory for new list item and pointing last item of list to it
	
	if(list_ptr->next != (struct entry *) 0)			//Checking if malloc worked
		list_ptr->next->next = (struct entry *) 0 ;		//Poining next element of new item to null
	
	return list_ptr->next ;	 
}
