#include <stdio.h>

int main(void)
{
	int n, r;
	
	//Ask user for input
	printf("Enter a number\n");
	scanf("%i", &n);
	printf("\n");
	
	//Print reversed number
	
	while (n != 0)
	{
		printf("%i", r = n % 10);
		n /= 10;	
	} 
	
	return 0;
}