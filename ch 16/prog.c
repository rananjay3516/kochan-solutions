/*data output to a file*/
#define e 10
#include <stdio.h>
int main (void)
 {
 	void sort_int (int array[], int n) ;
	int batch [e] ;
	for (int i = 0; i < e; i++)
	 scanf("%i", &batch[i]) ;
	sort_int (batch, e) ;
	for (int i = 0; i < e; i++)
	 printf("%i\n", batch[i]) ;
	return 0 ; 
 }

void sort_int (int array[], int n)
 {
 	int temp ;
	for (int i = 0; i < n-1; i++)
	 for (int j = i+1; j < n; j++) {
	  	if(array[j] < array[i]) {
		 	temp = array[i] ;
			array[i] = array[j] ;
			array[j] = temp ;
		 }
	  }
 }