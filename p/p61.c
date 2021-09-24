#include <stdio.h>

int main(void)
{
	int n;
	
	printf("Type in the number\n");
	scanf("%i", &n);
	
	if (n < 0)
	n = -n;
	
	printf("The absolute value of the number is %i", n);
	
	return 0;
}