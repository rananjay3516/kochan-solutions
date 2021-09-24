#include <stdio.h>

int main (void)
 {
 	int i = 68 ;
	char c = 'R' ;
	unsigned int u = 0xf179U ;  
	printf("%7i  %.7i	%i\n", i, i, u ) ;
	int *ip = &i ;
	char *cp = &c ;
	printf("%p\n%p\n", ip, cp) ;
	return 0 ;
 }