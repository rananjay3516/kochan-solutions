/*scanf type modifiers and converters*/
#include <stdio.h>
int main (void)
 {
 	char c, text[20], text2[20] ;
	int i1, i2, i3, i4 ;
	short int si ;
	unsigned int ui ;
	float f ;
	double d ;
	i3 = scanf("%i %n %i", &i1, &i4, &i2) ;
	printf("%i %i\n%i\n%i\n", i1, i2, i3, i4) ;
	return 0 ; 
 }