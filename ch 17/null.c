#include <stdio.h>

int main (void) {
	char buffer[128], *ptr = buffer ;
	while ( (*ptr++ = getchar()) != '\n' )
	 ;
	*ptr = '\0' ;
	FILE *out = fopen("result.txt", "w") ;
	for(int i = 0; buffer[i] != '\0'; i++)
	 fprintf(out, "%c", buffer[i]) ;
	printf("\n") ;
	return 0 ;
}