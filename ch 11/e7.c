/*Sorting an int array using pointers*/

#include <stdio.h>

int main (void)
 {
 	void sort_asc (int *array, const int n) ;			//Function declaration
	void print_array (int *array, const int n) ;
	int cartel [16] = {9, 2, 7, 3, 9, 67, -3, 42, 7, 14, 8, 4, 6, 1, -1} ;		//Array declaration   
	const int n = 15 ;		//Number of array elements
	print_array (cartel, n) ;		//Printing array before sort
	sort_asc (cartel, n) ;		//Function call to sort int array in ascending order
	print_array (cartel, n) ;		//Printing array after sort
	return 0 ;
 }
 
void print_array (int *array, const int n)		//Function to print int array using pointers
 {
 	const int *ptr ;		//Pointer to reference array elements
	const int const *array_end = array + n ;		//Pointer to reference end of array elements
	for (ptr = array; ptr < array_end; ptr++)
	 printf ("%i ", *ptr) ;
	printf ("\n") ;
 }

void sort_asc (int *array, const int n)
 {
 	int *i, *j, temp ;			//Pointers to reference array elements and a buffer
	int const *end = array + n ;			//Pointer to reference array end for j			
	for (i = array; i < end - 1; i++)
	 for (j = i + 1; j < end; j++)
	  if (*i > *j)
	   {
	   	temp = *i ;			//Store i in buffer
		*i = *j ;			//Assign value of element referenced by j to element referenced by i 
		*j = temp ;			//Assign original value of i stored in temp to element referenced by j
	   }
 }