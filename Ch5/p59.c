#include <stdio.h>

int main(void)
{
	int n, r;
	//Ask for input
	printf("Enter a number\n");
	scanf("%i", &n);
	
	//Print reversed number
	
	do
	{
		printf("%i", r = n % 10);
		n /= 10;
	}
	while(n != 0);
	
	return 0;
	
}