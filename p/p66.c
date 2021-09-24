#include <stdio.h>

int main(void)
{
	int n, sign;
	
	printf("Enter the number: ");
	scanf("%i", &n);
	
	if (n > 0)
		sign = 1;
	
	else if (n == 0)
		sign = 0;
	
	else 
		sign = -1;
	
	printf("Sign = %i", sign);

}