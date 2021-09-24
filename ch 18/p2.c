/*Pre-processor Debugging*/
#include <stdio.h>
#include <stdlib.h>

int multiply (int a, int b) {
	#ifdef DEBUG
	fprintf(stderr, "multiply(%i, %i)\n", a, b) ;				//Debug code
	#endif
	int result = a*b ;
	#ifdef DEBUG
	fprintf(stderr, "return %i\n", result ) ;
	#endif
	return result ;
}

int main (int argc, char argv []) {
	int arg1 = 0, arg2 = 0 ;
	if (argc > 1)
	 arg1 = atoi(argv[1]) ;
	if (argc == 3)
	 arg2 = atoi(argv[2]) ;
	
	#ifdef DEBUG										//Debug code
	fprintf(stderr, "Processed arguments = %i", argc - 1) ;	
	fprintf(stderr, "Arg1 = %i, Arg2 = %i", argv[1], argv[2]) ;
	#endif
	
	int multiply (int a, int b) ;
	printf("%i\n", multiply(arg1, arg2)) ;
	return 0 ;
}